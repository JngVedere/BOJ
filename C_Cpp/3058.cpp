//BOJ 3058 - BRONZ 3
//https://www.acmicpc.net/problem/3058
#include <iostream>
using namespace std;
int t, tmin, tmp, n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    
    while(t--){
        tmin = 100;
        tmp = 0;
        for(int i = 0; i < 7; i++){
            cin >> n;
            if(n%2==0){
                tmp+=n;
                if(n<tmin) tmin = n;
            }
        }
        cout << tmp << " " << tmin << "\n";
    }
}