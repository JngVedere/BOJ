//BOJ 24568 - BRONZ 5
//https://www.acmicpc.net/problem/24568
#include <iostream>
using namespace std;
int R,S,r;

int main(){
    cin >> R >> S;
    r = 8 * R + 3 * S;
    cout << (r > 28 ? r-28 : 0);
    return 0;
}