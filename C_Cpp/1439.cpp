//BOJ 1439 - SILVER 5
//https://www.acmicpc.net/problem/1439
#include <iostream>
using namespace std;
int l,z=0,o=0,cnt=0;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    s += '\0';
    l = s.length();
    for(int i = 0; i < l-1; i++){
        if(s[i]==s[i+1]) cnt++;
        else if(s[i]== '0' && (s[i+1] == '1' || s[i+1] == '\0')) o++;
        else if(s[i]== '1' && (s[i+1] == '0' || s[i+1] == '\0')) z++;
    }
    if(cnt==l-2) cout << 0;
    else if(z==0) cout << o;
    else if(o==0) cout << z;
    else cout << (z>o ? o : z);
    return 0;
}