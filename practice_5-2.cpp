#include <iostream>
using namespace std;

template <typename T>
void mySwap(T *x, T *y){
    T tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int x = 10;
    int y = 5;
    mySwap(&x, &y);
    cout << "x=" << x << ", y= " << y << endl;
}