//BOJ 28927 - BRONZ 5
//https://www.acmicpc.net/problem/28927
#include <iostream>
using namespace std;
int x,m,t,e,f;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t >> e >> f;
    x = t*3+e*20+f*120;

    cin >> t >> e >> f;
    m = t*3+e*20+f*120;

    if(x==m) cout << "Draw";
    else if(x>m) cout << "Max";
    else cout << "Mel";
}