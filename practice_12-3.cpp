#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cmath>
#include "number2.h"
using namespace std;
using namespace std::chrono;

mutex m;

void threadFunc(int N, int start, vector<int>* primes) {
	for (int n = start; n <= N; n += 3) {
		if (isPrime(n)) {
			unique_lock<mutex> lock(m);
			primes->push_back(n); //アロー演算子を使う
		}
	}
}

int main() {
	auto t0 = high_resolution_clock::now();

	//const int N = 4000000;
	const int N = 2147483647;
	//const int N = numeric_limits<int>::max();
	int rootN = static_cast<int>(sqrt(N)) + 1;

	//素数を数えながら2以上，sqrt(N)以下の素数リストを作る
	vector<int> primes;
	int total = 0;
#pragma omp parallel for schedule(dynamic, 1000) reduction(+:total)
	for (int n = 2; n <= rootN; ++n) {
		if (isPrime(n)) {
			++total;
#pragma omp critical;
			primes.push_back(n);
		}
	}

	sort(primes.begin(), primes.end());

	//素数のリストを使って素数を数える
#pragma omp parallel for schedule(dynamic, 1000) reduction(+:total)
	for (int n = rootN + 1; n <= N; ++n) {
		if (isPrime(n, primes)) {
			++total;
		}
	}

	cout << "素数の数:" << total << endl;

	auto t1 = high_resolution_clock::now();
	cout << duration_cast<milliseconds>(t1 - t0).count() / 1000. << "秒" << endl;

	while (1);

}