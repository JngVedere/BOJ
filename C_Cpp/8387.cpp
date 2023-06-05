//BOJ 8387 - BRONZ 3
//https://www.acmicpc.net/problem/8387
#include <iostream>
using namespace std;
int n, c = 0;
string a,b;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    cin >> a >> b;
    for(int i = 0; i < n; i++) if(a[i]==b[i]) c++;
    cout << c;
}