//BOJ 4592 - BRONZ 2
//https://www.acmicpc.net/problem/4592
#include <iostream>
#include <vector>
using namespace std;
int N, tmp;
vector<int> res;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        cin >> N;
        if(N == 0) break;

        vector<int>().swap(res);
        
        cin >> tmp;
        res.push_back(tmp);

        for(int i = 1; i < N; i++){
            cin >> tmp;
            if(tmp != res.back()) res.push_back(tmp);
        }

        for(int i : res){
            cout << i << ' ';
        }
        cout << "$\n";
    }
}