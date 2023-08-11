//BOJ 15873 - BRONZ 4
//https://www.acmicpc.net/problem/15873
#include <iostream>
#include <string>
using namespace std;
string input;
int integer, A, B, len;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> input;
    len = input.length();
    integer = stoi(input);

    if(len == 2){
        A = integer/10; 
        B = integer%10;
    }else if(len == 3){
        if(input[1]=='0'){
            A = integer/10; 
            B = integer%10;
        }else{
            A = integer/100; 
            B = integer%100;
        }
    }else{
        A = integer/100;
        B = integer%100;
    }
    cout << A + B;
}