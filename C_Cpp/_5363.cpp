//BOJ 5363 - BRONZ 2
//https://www.acmicpc.net/problem/5363
#include <iostream>
using namespace std;
int N, i, l, cnt;
string so, s[2] = {""};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    while(N--){
        cnt = 0;
        getline(cin, so);
        l = so.length();
        for(i = 0; cnt < 2; i++){
            s[cnt] += to_string(so[i]);
            if(so[i]==' ') cnt++;
        }

        for(; i < l;i++) cout << so[i];
        cout << ' ' << s[0] << s[1] << "\n";
    }
}