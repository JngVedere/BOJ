//BOJ 10987 - BRONZ 32
//https://www.acmicpc.net/problem/10987
#include <iostream>
using namespace std;
int l, a[26] = {0};
string N;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    l = N.length();

    for(int i = 0; i < l; i++) a[N[i]-'a']++;

    cout << a[0] + a[4] + a[8] + a[14] + a[20];
}