//BOJ 1032 - BRONZ 1
//https://www.acmicpc.net/problem/1032
#include <iostream>
using namespace std;
int N, l;
string c,f;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    cin >> c; N--;
    l = c.length();
    while(N--){
        cin >> f;
        for(int i = 0; i < l; i++){
            if(c[i]!=f[i]) c[i] = '?';
        }
    }
    cout << c;
    return 0;
}