//BOJ 1269 - SILVER 4
//https://www.acmicpc.net/problem/1269
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,s,d=0; cin >> a >> b;
    int res[200000];
    for(int i = 0; i < a; i++) cin >> res[i];
    sort(res, res+a);

    for(int i = 0; i < b; i++){
        cin >> s;
        if(binary_search(res,res+a,s)) d++;
    }

    cout << a+b-2*d;
    return 0;
}