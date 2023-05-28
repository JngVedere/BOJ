//BOJ 2442 - BRONZ 3
//https://www.acmicpc.net/problem/2442
#include <iostream>
using namespace std;
int n;

int main(){
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = i; j < n; j++) cout << " ";
        for(int k = 1; k <= 2*i - 1; k++) cout << "*";
        cout << "\n";
    }
    return 0;
}