#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello, World!";
    int num = str.length();
    for(int i = num; i >= 0; i--){
        cout << str[i];
    }
    cout << endl;
}