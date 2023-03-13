//BOJ 2444 - BRONZ 3
//https://www.acmicpc.net/problem/2444
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        for(int j=0;j<N-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=N-1;i>0;i--){
        for(int j=0;j<N-i;j++){
            cout << " ";
        }
        for(int j=0;j<2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}