#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double x = 0.1;
    stringstream ss; //文字列を操作するためのクラス
    ss << setprecision(14) << hexfloat << x; //14桁表示にして，小数対応の16進数に変換
    string result1 = ss.str(); //文字列を出力
    cout << result1 << endl; //result1は文字

    double y = stod(result1); //string to double
    cout << (x == y ? "等しい" : "等しくない") << endl; //数値で比較
}