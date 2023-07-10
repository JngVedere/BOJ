//BOJ 11024 - BRONZ 3
//https://www.acmicpc.net/problem/11024
#include <iostream>
#include <sstream>
using namespace std;
int T, sum, num;
string s, tmp;
stringstream ss;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        sum = 0;
        cin >> s;
        ss.str(s);
        while(ss >> num) sum += num;
        cout << sum << "\n";
        ss.str("");
    }
}