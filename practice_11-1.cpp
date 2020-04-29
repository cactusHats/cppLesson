#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> dictionary{{"one",1},{"two",2},{"three",3}};

    try{
        string target = "four";
        cout << dictionary.at(target) << endl;
    }
    catch(out_of_range& e){
        cerr << e.what() << endl;
    }
    cout << "正常終了" << endl;
}