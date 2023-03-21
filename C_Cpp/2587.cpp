//BOJ 2587 - BRONZ 2
//https://www.acmicpc.net/problem/2587
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[5]= {0,};
    double sum = 0;
    for(int i = 0;i<5;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+5);
    cout << sum/5.0 << "\n" << a[2];
    return 0;
}