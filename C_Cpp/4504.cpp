//BOJ 4504 - BRONZ 3
//https://www.acmicpc.net/problem/4504
#include <iostream>
using namespace std;
int b, t;

int main(){
    ios ::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> b;
    while(true){
        cin >> t;
        if(t == 0) break;

        if(t%b==0) cout << t << " is a multiple of " << b << ".\n";
        else cout << t << " is NOT a multiple of " << b << ".\n";
    }
}