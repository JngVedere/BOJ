//BOJ 2605 - BRONZ 2
//https://www.acmicpc.net/problem/2605
#include <iostream>
#include <vector> 
using namespace std;
int n, tmp;
vector<int> line;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        line.insert(line.begin()+i-tmp,i+1);
    }

    for(auto iter = line.begin(); iter != line.end(); iter++) cout << *iter << " ";

    return 0;
}