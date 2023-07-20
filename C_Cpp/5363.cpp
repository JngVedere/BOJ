//BOJ 5363 - BRONZ 2
//https://www.acmicpc.net/problem/5363
#include <iostream>
#include <sstream>
using namespace std;
int N, i, l, cnt;
string _, so, tmp, s[2] = {""};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    getline(cin, _);

    while(N--){
        cnt = 0;
        getline(cin, so);
        stringstream ss(so);
        while(getline(ss, tmp, ' ')){
            if(cnt < 2) s[cnt++] = tmp;
            else cout << tmp << " ";
        }

        for(int i = 0; i < 2; i++) cout << s[i] << " ";
        cout << "\n";
    }
}