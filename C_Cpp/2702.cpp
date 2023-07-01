//BOJ 2702 - BRONZ 2
//https://www.acmicpc.net/problem/2702
#include <iostream>
#include <cmath>
using namespace std;
int T, a, b;

int gcd(int a,int b){
    int tmp, n;

    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b!=0){
        n = a%b;
        a = b;
        b = n;
    }

    return a;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        int g;
        cin >> a >> b;
        g = gcd(a,b);
        cout << a*b/g << " " << g << "\n";
    }
}