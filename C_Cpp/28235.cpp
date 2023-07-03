//BOJ 28235 - BRONZ 5
//https://www.acmicpc.net/problem/28235
#include <iostream>
using namespace std;
string inp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> inp;

    if(inp == "SONGDO") cout << "HIGHSCHOOL";
    else if(inp == "CODE") cout << "MASTER";
    else if(inp == "2023") cout << "0611";
    else cout << "CONTEST";
}
