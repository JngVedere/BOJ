// BOJ 26575 - BRONZ 5
//https://www.acmicpc.net/problem/26575
#include <iostream>
using namespace std;
int n;
double d,f,p;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout.precision(2);
    cout << fixed;
    while(n--){
        cin >> d >> f >> p;
        cout << "$"<< d * f * p << "\n";
    }
    return 0;
}
