// BOJ 10988 - BRONZ 2
// https://www.acmicpc.net/problem/10988
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string input_word;
    cin >> input_word;
    string temp(input_word);
    reverse(input_word.begin(),input_word.end());
    if(temp.compare(input_word)==0){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;
}