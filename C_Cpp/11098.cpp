//BOJ 11098 - BRONZ 2
//https://www.acmicpc.net/problem/11098
#include <iostream>
using namespace std;
int n,p,C, mm = 0;
string m, s;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        mm = 0;
        cin >> p;
        for(int i = 0; i < p; i++){
            cin >> C >> s;
            if(C > mm){
                mm = C;
                m = s;
            }
        }
        cout << m << "\n";
    }
}