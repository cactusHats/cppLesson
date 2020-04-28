#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int age;
    //デフォルトコンストラクタ
    Person() {
        cout << "constructor\n"<< endl;
    }
    //コピーコンストラクタ
    Person(const Person& x): name(x.name), age(x.age) {
        cout << "copy"<<endl;
    }
    //ムーブコンストラクタ
    Person(Person&& x) noexcept: name(move(x.name)), age(x.age) {
        cout << "move"<<endl;
    }
    //コピー代入演算子
    Person& operator = (const Person& x) noexcept {
        name = x.name;
        age = x.age;
        cout << "assign" << endl;
        return *this;
    }
};

Person f(){
    Person masato;
    masato.name = "Masato";
    masato.age = 0;
    return masato;
}

int main(){
    //ケース1
    Person taro;
    taro.name = "Taro";
    taro.age = 32;

    //ケース2
    Person A(taro);
    //Person A = taro;
    cout << A.name << endl;

    //ケース3
    Person B;
    B = taro;
    cout << B.name << endl;

    //ケース4
    Person C(f());
    //Person C = f();
    cout << C.name << endl;
}