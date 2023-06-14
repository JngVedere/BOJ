//BOJ 5218 - BRONZ 2
//https://www.acmicpc.net/problem/5218
#include <iostream>
using namespace std;
int T, l, a;
string x,y;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    while(T--){
        cin >> x >> y;
        l = x.length();

        cout << "Distances:";
        for(int i = 0; i < l; i++){
            a = y[i] - x[i];
            if(a < 0 ) cout << " " << 26+a;
            else cout << " " << a;
        }
        cout << "\n";
    }
}