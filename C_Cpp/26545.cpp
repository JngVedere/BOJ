// BOJ 26545 - BRONZ 5
//https://www.acmicpc.net/problem/26545
#include <iostream>
using namespace std;
int n;
long long x,s=0;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        s+=x;
    }
    cout << s;
}