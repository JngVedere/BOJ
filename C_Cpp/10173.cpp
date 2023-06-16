//BOJ 10173 - BRONZ 2
//https://www.acmicpc.net/problem/10173
#include <iostream>
#include <algorithm>
using namespace std;
int l;
string s, a = "";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        getline(cin, s);
        if(s == "EOI") break;
        l = s.length();

        for(int i = 0; i < l; i++){
            if(s[i]=='N') s[i] = 'n';
            else if(s[i] =='E') s[i] = 'e';
            else if(s[i] =='M') s[i] = 'm';
            else if(s[i] =='O') s[i] = 'o';
        }

        if(s.find("nemo")!=string::npos) cout << "Found\n";
        else cout << "Missing\n";
    }
}