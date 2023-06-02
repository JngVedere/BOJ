//BOJ 13772 - BRONZ 2
//https://www.acmicpc.net/problem/13772
#include <iostream>
#include <map>
using namespace std;
map<char, int> HOLES = {
        {'A', 1},
        {'B', 2},
        {'D', 1},
        {'O', 1},
        {'P', 1},
        {'Q', 1},
        {'R', 1},
};
int n,l,tmp;
string s;
char o;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin >> o;
    while(n--){
        tmp = 0;
        getline(cin,s);
        l = s.length();
        for(int i = 0; i < l; i++) tmp += HOLES[s[i]];
        cout << tmp << "\n";
    }
    return 0;
}