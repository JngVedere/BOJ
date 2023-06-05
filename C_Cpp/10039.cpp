//BOJ 10039 - BRONZ 4
//https://www.acmicpc.net/problem/10039
#include <iostream>
using namespace std;
int n, sum = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0; i < 5; i++){
        cin >> n;
        sum += (n >= 40 ? n : 40);
    }
    cout << sum/5;
    return 0;
}