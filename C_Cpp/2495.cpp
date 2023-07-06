//BOJ 2495 - BRONZ 2
//https://www.acmicpc.net/problem/2495
#include <iostream>
using namespace std;
int LSL, cnt, T = 3, len;
string input;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(T--){
        cnt = 1;
        LSL = 1;
        cin >> input;
        len = input.length();

        for(int i = 1; i < len; i++){
            if(input[i]==input[i-1]) cnt++;
            else cnt = 1;

            if(cnt > LSL) LSL = cnt;
        }
        cout << LSL << "\n";
    }
}