//BOJ 10953 - BRONZ 3
//https://www.acmicpc.net/problem/10953
#include <iostream>
using namespace std;
int N, A, B;
char _;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    while(N--){
        cin >> A >> _ >> B;
        cout << A + B << "\n";
    }
}
