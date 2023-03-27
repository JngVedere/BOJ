//BOJ 14425 - BRONZ 3
//https://www.acmicpc.net/problem/14425
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,M,res=0; string a;
    cin >> N >> M;
    string* S = new string[N];

    for(int i = 0; i < N; i++){
        cin >> S[i];
    }
    sort(S,S+N);

    while(M--){
        cin >> a;
        int i = 0;
        while(i < N){
            int temp = S[i].compare(a);
            if(temp < 0){
                i++;
                continue;
            }else if(temp > 0){
                break;
            }else{ //same
                res++;
                break;
            }
        }
    }

    cout << res;
    return 0;
}