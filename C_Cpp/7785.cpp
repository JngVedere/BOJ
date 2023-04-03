//BOJ 7785 - SILVER 5
//https://www.acmicpc.net/problem/7785
#include <iostream>
#include <set>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string m,s;
    set<string> p;
    while(n--){
        cin >> m >> s;
        if(s[0]=='e') p.insert(m);
        else if(s[0]=='l') p.erase(m);
    }
    
    for(auto iter = p.rbegin(); iter!=p.rend();iter++) cout << *iter << '\n';
    return 0;
}