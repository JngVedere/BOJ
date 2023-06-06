//BOJ 2476 - BRONZ 3
//https://www.acmicpc.net/problem/2476
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int eye[6];
int N, t, credit, check, ans = 0, tmp;

int main(){
    cin >> N;
    while (N--)
    {   
        check = 0;
        memset(eye, 0, sizeof(int)*6);
        for(int i = 0; i < 3; i++){
            cin >> t;
            eye[t-1]++;
        }
        
        for(int i = 5; i >= 0; i--){
            if(eye[i] > check){
                check = eye[i];
                tmp = i+1;
            } 
        }

        if(check==3) tmp = 10000 + tmp * 1000;
        else if(check==2) tmp = 1000 + tmp * 100;
        else tmp *= 100;

        if(tmp >= ans) ans = tmp;
    }
    cout << ans;
}