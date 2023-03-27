//BOJ 14425 - BRONZ 3
//https://www.acmicpc.net/problem/14425
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,M,res=0; string a,b;
    cin >> N >> M;
    vector<string> S;

    for(int i = 0; i < N; i++){
        cin >> a;
        S.push_back(a);
    }

    while(M--){
        cin >> b;
        if(find(S.begin(),S.end(),b)!=S.end()) res++;
    }

    cout << res;
    return 0;
}

///////////////// TIME OUT CODE ////////////////////