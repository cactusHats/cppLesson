#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile("numbers.dat", ios_base::out);

    for(int i=0; i<1000; i++){
        outfile << i+1 << endl;
    }

    outfile.close();
}