//BOJ 2857 - BRONZ 3
//https://www.acmicpc.net/problem/2857
#include <iostream>
#include <algorithm>
using namespace std;
string s, a = "";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 5; i++){
        cin >> s;
        if(s.find("FBI")!=string::npos)  a += (to_string(i) + " ");
    }

    if(a=="") cout << "HE GOT AWAY!";
    else cout << a;
}