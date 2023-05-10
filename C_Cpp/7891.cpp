//BOJ 7891 - BRONZ 5
//https://www.acmicpc.net/problem/7891
#include <iostream>
#include <algorithm>
using namespace std;
int t,x,y;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> x >> y;
        cout << x + y << "\n";
    }
    return 0;
}