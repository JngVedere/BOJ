//BOJ 10822 - BRONZ 2
//https://www.acmicpc.net/problem/10822
#include <iostream>
#include <sstream>
using namespace std;
int num, sum;
string s, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    stringstream ss(s);

    while(getline(ss, tmp, ',')) sum += stoi(tmp);
    cout << sum;
}