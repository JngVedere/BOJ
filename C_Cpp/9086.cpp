//BOJ 9086 - BRONZ 5
//https://www.acmicpc.net/problem/9086
#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    string str;
    cin >> T;
    while(T--){
        cin >> str;
        cout << str.at(0) << str.back() << endl;
    }
    return 0;
}