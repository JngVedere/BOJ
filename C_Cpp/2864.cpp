//BOJ 2864 - BRONZ 3
//https://www.acmicpc.net/problem/2864
#include <iostream>
#include <algorithm>
using namespace std;
int mi, ma;
string A, B;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> A >> B;
    replace(A.begin(), A.end(),'6','5');
    replace(B.begin(), B.end(),'6','5');
    mi = stoi(A) + stoi(B);

    replace(A.begin(), A.end(),'5','6');
    replace(B.begin(), B.end(),'5','6');
    ma = stoi(A) + stoi(B);

    cout << mi << " " << ma;
}