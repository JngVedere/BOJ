//BOJ 2485 - SILVER 4
//https://www.acmicpc.net/problem/2485
#include <iostream>
#include <algorithm>
#include <set>
// #include <numeric>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int N,g,sum=0,res;
    scanf("%d",&N);
    int* t = new int[N]; int* d = new int[N-1]; 

    for(int i = 0; i < N; i++){
        scanf("%d",&t[i]);
    }

    sort(t,t+N);
    for(int i = 1; i < N; i++){
        d[i-1] = t[i] - t[i-1];
        sum += d[i-1];
    }
    set<int> s(d,d+N-1);

    g = *(s.begin());
    for(auto iter = s.begin(); iter!=s.end();iter++){
        g = gcd(g, *iter); //c++ 17
    }

    res = sum / g - N + 1;
    cout << res ;
    
    delete[] t; delete[] d;
    return 0;
}