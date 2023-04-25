//BOJ 4101 - BRONZ 5
//https://www.acmicpc.net/problem/4101
#include <iostream>
using namespace std;
int N1,N2;

int main(){
    while(true){
        cin >> N1 >> N2;
        if(!N1 && !N2) break;
        cout << (N1>N2 ? "Yes\n" : "No\n");
    }
    return 0;
}