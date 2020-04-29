#include <iostream>
#include <regex>
using namespace std;

int main(){
    string str = "私の郵便番号は194-0013、彼女の郵便番号は153-0042です。";
    //regex rx(R"(\d{3,4})"); //正規表現のためのregexオブジェクト(3-4桁の数字)
    regex rx(R"(\d+)"); //正規表現のためのregexオブジェクト(\d+=数字列)
    sregex_iterator it(str.begin(), str.end(), rx); //文字列の検索
    sregex_iterator end;
    while(it != end){
        cout << (it++) -> str() << endl; //取り出して次に移動
    }
}