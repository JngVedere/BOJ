//BOJ 27889 - BRONZ 5
//https://www.acmicpc.net/problem/27889
#include <iostream>
using namespace std;
string s;

int main(){
    cin >> s;
    if(s[0] == 'B') cout << "Branksome Hall Asia";
    else if(s[0] == 'N') cout << "North London Collegiate School";
    else if(s[0] == 'K') cout << "Korea International School";
    else cout << "St. Johnsbury Academy";
}