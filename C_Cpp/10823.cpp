//BOJ 10823 - BRONZ 1
//https://www.acmicpc.net/problem/10823
#include <iostream>
#include <sstream>
using namespace std;
int sum;
string all, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        getline(cin, tmp);
        if(cin.eof()) break;

        all += tmp;
    }   

    stringstream ss(all);

    while(getline(ss, tmp, ',')){
        sum += stoi(tmp);
    }

    cout << sum;
}