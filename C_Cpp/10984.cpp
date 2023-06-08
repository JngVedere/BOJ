//BOJ 10984  - BRONZ 3
//https://www.acmicpc.net/problem/10984
#include <iostream>
#include <cmath>
using namespace std;
int T, N, C, s1 = 0;
double G, s2 = 0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while(T--){
        s1 = 0; s2 = 0;
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> C >> G;
            s1 += C;
            s2 += C*G;
        }
        cout << s1 << " " << round(s2/s1*10)/10 << "\n";
    }
}