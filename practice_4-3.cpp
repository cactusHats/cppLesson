#include <iostream>
using namespace std;

int main(){
    char ch = 0x20;
    int cnt = 0x01;

    cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";
    cout << "-|--------------------------------\n";

    while(cnt <= (0x7f-0x1F)){
        if(cnt % 0x10 == 0x01){
            cout << cnt/16+2 << "|";
        }
        cout << " " << ch;
        if(cnt % 0x10 == 0x00){
            cout << endl;
        }
        ch++;
        cnt++;
    }
}