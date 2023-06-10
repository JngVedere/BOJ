//BOJ 2693 - BRONZ 1
//https://www.acmicpc.net/problem/2693
#include <iostream>
#include <algorithm>
using namespace std;
int n, arr[10];

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        for(int i = 0; i < 10; i++) cin >> arr[i];
        sort(arr, arr+10);
        cout << arr[7] << "\n";
    }
}