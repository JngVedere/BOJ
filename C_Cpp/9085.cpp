//BOJ 9085 - BRONZ 3
//https://www.acmicpc.net/problem/9085
#include <iostream>
#include <sstream>
using namespace std;
int T, N, sum, tmp;
string _, str;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        sum = 0;
        cin >> N;
        getline(cin, _);
        getline(cin, str);
        stringstream ss(str);
        while(ss >> tmp) sum += tmp;
        cout << sum << "\n";
    }
}