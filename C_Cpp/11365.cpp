//BOJ 11365 - BRONZ 1
//https://www.acmicpc.net/problem/11365
#include <iostream>
using namespace std;
int l;
string s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    while(true){
        getline(cin, s);

        if(s=="END") break;

        l = s.length();

        for(int i = l-1; i >= 0; i--) putchar(s[i]);
        putchar('\n');
    }
}