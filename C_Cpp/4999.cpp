//BOJ 4999 - BRONZ 5
//https://www.acmicpc.net/problem/4999
#include <iostream>
using namespace std;
string s1,s2;
int l1,l2;

int main(){
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    cout << (l1 < l2 ? "no" : "go");
    return 0;
}