//BOJ 5988 - BRONZ 3
//https://www.acmicpc.net/problem/5988
#include <iostream>
using namespace std;
int N, L;
string K;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    while(N--){
        cin >> K;
        L = K.length() - 1;
        if((K[L]-'0')%2==0) cout << "even\n";
        else cout << "odd\n";
    }
}