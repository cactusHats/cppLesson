#include <iostream>
using namespace std;

int fuctorial(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    int num = 5;
    cout << "f(" << num << ") = " << fuctorial(num) <<endl;
}