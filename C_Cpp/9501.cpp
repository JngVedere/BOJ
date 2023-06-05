//BOJ 9501 - BRONZ 3
//https://www.acmicpc.net/problem/9501
#include <iostream>
using namespace std;
int T, N, D;
int v, f, c, cnt;
double t;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    while(T--){
        cnt = 0;
        cin >> N >> D;
        for(int i = 0; i < N; i++){
            cin >> v >> f >> c;
            t = f / (double)c * v;
            if(t >= D) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}