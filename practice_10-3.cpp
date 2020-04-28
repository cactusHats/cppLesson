#include <iostream>
#include <vector>
#include <algorithm> //necessary
#include <string> //necessary
using namespace std;

struct Person{
    string name;
    int age;
    Person(const string& newName, int newAge): name(newName), age(newAge) {}
};

bool operator<(const Person& lhs, const Person& rhs){
    //return lhs.name < rhs.name;
    return lhs.age < rhs.age;
}

int main(){
    vector<Person> people;
    people.emplace_back("Taro", 32);
    people.emplace_back("Hanako", 27);
    people.emplace_back("Masato", 0);

    sort(people.begin(), people.end());
    for(auto& p : people){
        cout << p.name << "(" << p.age << ")" <<", ";
    }
    cout << endl;
}