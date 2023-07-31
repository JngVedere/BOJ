//BOJ 10599 - BRONZ 3
//https://www.acmicpc.net/problem/10599
#include <iostream>
using namespace std;
int a,b,c,d,mi,ma;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        cin >> a >> b >> c >> d;
        if(a==0 && b == 0 && c == 0 && d == 0) break;
        mi = c - b;
        ma = d - a;
        cout << mi << " " << ma << "\n";
    }
}