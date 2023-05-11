//BOJ 16099 - BRONZ 5
//https://www.acmicpc.net/problem/16099
#include <iostream>
using namespace std;
double n, lt, wt, le, we;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> lt >> wt >> le >> we;
        cout << (lt*wt > le*we ? "TelecomParisTech\n" : "Eurecom\n");
    }
    return 0;
}