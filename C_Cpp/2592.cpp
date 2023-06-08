//BOJ 2592 - BRONZ 2
//https://www.acmicpc.net/problem/2592
#include <iostream>
using namespace std;
int R = 10, n, sum = 0, s = 0, m;
int num[101] = {0};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(R--){
        cin >> n;
        sum += n;
        num[n/10]++;
    }
    
    for(int i = 0; i < 101; i++){
        if(num[i]>s){
            s = num[i];
            m = i*10;
        }
    }
    cout << sum/10 << "\n" << m;
    return 0;
}