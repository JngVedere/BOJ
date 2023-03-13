//BOJ 11718 - BRONZ 5
//https://www.acmicpc.net/problem/11718
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(1){
        getline(cin, str);
        if(cin.eof()){
            break;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}