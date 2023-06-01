//BOJ 5524 - BRONZ 4
//https://www.acmicpc.net/problem/5524
#include <iostream>
using namespace std;
int N,l;
string Si;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    while(N--){
        cin >> Si;
        l = Si.length();
        for(int i = 0; i < l; i++){
            if(Si[i] <= 'Z') Si[i] += 32;
        }
        cout << Si << "\n";
    }
    return 0;
}