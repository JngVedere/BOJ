//BOJ 5656 - BRONZ 2
//https://www.acmicpc.net/problem/5656
#include <iostream>
using namespace std;
int l, r, e, i;
string o;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        i++;
        cin >> l >> o >> r;
        e = o.length();
        if(o=="E") break;
        else if(o=="<") cout << "Case " << i << ": " << (l < r ? "true" : "false") << "\n";
        else if(o==">") cout << "Case " << i << ": " << (l > r ? "true" : "false") << "\n";
        else if(o[0]=='<') cout << "Case " << i << ": " << (l <= r ? "true" : "false") << "\n";
        else if(o[0]=='>') cout << "Case " << i << ": " << (l >= r ? "true" : "false") << "\n";
        else if(o[0]=='!') cout << "Case " << i << ": " << (l != r ? "true" : "false") << "\n";
        else cout << "Case " << i << ": " << (l == r ? "true" : "false") << "\n";
    }
}