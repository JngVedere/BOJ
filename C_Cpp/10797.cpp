//BOJ 10797 - BRONZ 4
//https://www.acmicpc.net/problem/10797
#include <iostream>
using namespace std;
int d, f, s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> d;
    d %= 10;

    for(int i = 0; i < 5; i++){
        cin >> f;
        if(f == d) s++;
    }
    cout << s;
}