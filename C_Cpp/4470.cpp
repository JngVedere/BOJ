//BOJ 4470 - BRONZ 4
//https://www.acmicpc.net/problem/4470
#include <iostream>
using namespace std;
int T;
string s, r;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    getline(cin, r);
    for(int i = 1; i <= T; i++){
        getline(cin, s);
        cout << i << ". " << s << "\n";
    }
}