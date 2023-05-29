// BOJ 27328 - BRONZ 5
//https://www.acmicpc.net/problem/27328
#include <iostream>
using namespace std;
int a,b;

int main(){
    cin >> a >> b;
    if(a==b) cout << 0;
    else if(a>b) cout << 1;
    else cout << -1;
}