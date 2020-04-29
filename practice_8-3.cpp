#include <iostream>
using namespace std;

int main(){
    cout << "整数を入力してください(ctrl+zで終了)" << endl;
    int total = 0;
    int n;
    while(cin >> n){
        total += n;
    }
    cout << "total = "<< total << endl;
}