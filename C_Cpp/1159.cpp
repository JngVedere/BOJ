//BOJ 1159 - BRONZ 2
//https://www.acmicpc.net/problem/1159
#include <iostream>
#include <algorithm>
using namespace std;
string fname, res = "";
char name[150], tmp;
int N, cnt;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for(int i = 0; i <N; i++){
        cin >> fname;
        name[i] = fname[0];
    }

    sort(name, name+N);
    
    for(int i = 0; i < N; i++){
        if(tmp != name[i]){
            tmp = name[i];
            cnt = 0;
        }

        cnt++;
        if(cnt==5) res+=tmp;
    }
    cout << (res == "" ? "PREDAJA" : res);
    return 0;
}