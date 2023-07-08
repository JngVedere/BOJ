//BOJ 10801 - BRONZ 2
//https://www.acmicpc.net/problem/10801
#include <iostream>
using namespace std;
int A[10], B[10], a, b;
string k = "D";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 10; i++) cin >> A[i];
    for(int i = 0; i < 10; i++) cin >> B[i];
    for(int i = 0; i < 10; i++) if(A[i] > B[i]) a++; else if(B[i] > A[i]) b++;
    
    if(a>b) k = "A"; else if(a<b) k = "B";
    cout << k;
}