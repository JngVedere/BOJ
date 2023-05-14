//BOJ 27959 - BRONZ 5
//https://www.acmicpc.net/problem/27959
#include <iostream>
using namespace std;
int N,M;

int main(){
    cin >> N >> M;;
    cout << (M > N*100 ? "No" : "Yes");
    return 0;
}