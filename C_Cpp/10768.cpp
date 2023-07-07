//BOJ 10768 - BRONZ 4
//https://www.acmicpc.net/problem/10768
#include <iostream>
using namespace std;
int month, day;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> month >> day;
    if(month < 2) cout << "Before";
    else if(month > 2) cout << "After";
    else if(day < 18) cout << "Before";
    else if(day > 18) cout << "After";
    else cout << "Special";
}