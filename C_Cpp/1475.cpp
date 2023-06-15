//BOJ 1475 - SILVER 5
//https://www.acmicpc.net/problem/1475
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int set[10] = {0}, l, avg;
string n;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    l = n.length();
    for(int i = 0; i < l; i++) set[n[i]-'0']++;

    avg = ceil((set[6] + set[9]) / (double)2);
    set[6] = set[9] = avg;

    sort(set, set+10);

    cout << set[9];
}