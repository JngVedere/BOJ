//BOJ 2745 - BRONZE 2
//https://www.acmicpc.net/problem/2745

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    int cvrt[43] = {0,1,2,3,4,5,6,7,8,9,0,0,0,0,0,0,0,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
    int B,res=0; string N;
    cin >> N >> B;
    for(int i = 0; i < N.length();i++){
        res+=cvrt[N[i]-48]*pow((double)B,(double)i);

    }
    cout << res;
    return 0;
}