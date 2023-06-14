//BOJ 2948 - BRONZE 2
//https://www.acmicpc.net/problem/2948
#include <iostream>
using namespace std;
int D, M;
int m[12] = {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
string w[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> D >> M;

    cout << w[(4 + m[M-1] + D)%7];
}