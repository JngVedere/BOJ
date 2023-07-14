//BOJ 11966 - BRONZ 3
//https://www.acmicpc.net/problem/11966
#include <iostream>
using namespace std;
long long value;
bool ans = true;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> value;
    while(value>1){
        if(value%2 != 0){
            ans = false;
            break;
        }
        value /= 2;
    }
    cout << ans;
}