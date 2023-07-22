// BOJ 10995 - BRONZ 3
// https://www.acmicpc.net/problem/10995
#include <iostream>
using namespace std;
bool flag;
int N;
string e = "", o = "";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    //Init string for odd number
    flag = true;
    for(int i = 0; i < 2 * N; i++){
        o += (flag ? "*" : " ");
        flag = !flag;
    }

    //Init string for even number
    flag = false;
    for(int i = 0; i < 2 * N; i++){
        e += (flag ? "*" : " ");
        flag = !flag;
    }

    //Print
    for(int i = 1; i <= N; i++){
        if(i%2==0) cout << e << "\n";
        else cout << o << "\n";
    }
}