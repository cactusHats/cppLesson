#include <iostream>
using namespace std;

template<typename T>
void myReserve(T start, T end){
    while(start < end){
        end--;
        auto tmp = *end;
        *end = *start;
        *start = tmp;
        start++;
    }
}

int main(){
    int a[]={2,9,4,1,5,3};
    myReserve(a, end(a));
    for(auto i : a) cout << i << ", ";
    cout << endl;

    int b[] = {3};
    myReserve(b, end(b));
    for(auto i : b) cout << i << ", ";
    cout << endl;
}