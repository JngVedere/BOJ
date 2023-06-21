//BOJ 2712 - BRONZ 3
//https://www.acmicpc.net/problem/2712
#include <iostream>
#include <cmath>
using namespace std;
int T;
double v, a;
string u;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    cout.precision(4);
    cout << fixed;

    while(T--){
        cin >> v >> u;
        if(u[0]=='k') {a = v * 2.2046 * 10000; u = "lb";}
        else if(u[0]=='g'){ a = v * 3.7854 * 10000; u = "l";}
        else if(u=="l") {a = v * 0.2642 * 10000; u = "g";}
        else {a = v * 0.4536 * 10000; u = "kg";}

        cout << round(a)/10000 << " " << u <<"\n";
    }
}