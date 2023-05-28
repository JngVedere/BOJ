//BOJ 1924 - BRONZ 1
//https://www.acmicpc.net/problem/1924
// solved with Zellar's Congruence Theorem
#include <iostream>
using namespace std;
int x,y,res;
int num[12] = {6,2,2,5,0,3,5,1,4,6,2,4};
string days[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    res = (1 + num[x-1] + y) % 7;
    cout << days[res];
    return 0;
}