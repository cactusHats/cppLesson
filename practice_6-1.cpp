#include <iostream>
#include <vector>
using namespace std;

int total(vector<vector<int>>& v){
    int ans = 0;
    for(const auto& tmp : v) {
        for(const auto w : tmp){
            ans += w;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> m{ {1,2,3}, {4,5,6} };
    cout << total(m) << endl;
}