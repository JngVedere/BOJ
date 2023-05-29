// BOJ 26489 - BRONZ 5
//https://www.acmicpc.net/problem/26489
#include <iostream>
using namespace std;
int c;
string s;

int main(){
    while(true){
        getline(cin,s);
        if(cin.eof()) break;
        c++;
    }
    cout << c;
}