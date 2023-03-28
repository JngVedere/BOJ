//BOJ 1620 - SILVER 4
//https://www.acmicpc.net/problem/1620
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,M; string a;
    map<int,string> num;
    map<string, int> mob;

    cin >> N >> M;
    for(int i = 1; i <=N ; i++){
        cin >> a;
        num[i] = a;
        mob[a] = i;
    }

    for(int i = 0; i <M; i++){
        cin >> a;
        if(isdigit(a[0])){
            cout << (num.find(stoi(a)))->second << "\n";
        }else{
            cout << (mob.find(a))->second << "\n";
        }
    }
    return 0;
}