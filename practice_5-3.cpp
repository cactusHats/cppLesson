#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a=1;
    int b=2;
    swap(a,b);
    cout << a << endl;
    cout << b << endl;

    double x=1.23;
    double y=4.56;
    swap(x,y);
    cout << x << endl;
    cout << y << endl;

    string s="abc";
    string t="xyz";
    swap(s,t);
    cout << s << endl;
    cout << t << endl;
}