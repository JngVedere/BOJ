//BOJ 10821 - BRONZ 2
//https://www.acmicpc.net/problem/10821
#include <iostream>
#include <sstream>
using namespace std;
int c;
string s,tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    stringstream ss(s);
    while(getline(ss, tmp, ',')) c++;
    cout << c;
}