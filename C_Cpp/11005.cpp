//BOJ 2745 - BRONZE 2
//https://www.acmicpc.net/problem/2745

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// bool isDigit(const string s){
//     return s.find_first_not_of("0123456789") == string :: npos;
// }

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    string arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", r;
    int N,B,n,re; cin >> N >> B;
    n = N;
    while(n!=0){
        r += arr[n%B]; n/=B;
    }
    reverse(r.begin(),r.end());
    cout << r;
    return 0;
}