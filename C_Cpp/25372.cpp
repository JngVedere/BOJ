// BOJ 25372 - BRONZ 5
//https://www.acmicpc.net/problem/25372
#include <iostream>
using namespace std;
int n,l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    while(n--){
        cin >> s;
        l = s.length();
        cout << (l >= 6 && l <= 9 ? "yes\n" : "no\n");
    }

    return 0;
}
