#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream infile("numbers.dat");
    string line;
    int total = 0;
    while(getline(infile, line)){
        total += stoi(line);
    }
    cout << "total = " << total << endl;
    infile.close();
}