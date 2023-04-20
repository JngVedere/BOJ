//BOJ 1267 - BRONZ 3
//https://www.acmicpc.net/problem/1267
#include <iostream>
using namespace std;
int N,c,s1=0,s2=0; //N < 20 & c < 10,000


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        s1 += (c/30 + 1)*10;
        s2 += (c/60 + 1)*15;
    }
    int f = s1 - s2;
    if(f == 0) cout << "Y M " << s1;
    else if(f < 0) cout << "Y " << s1;
    else cout << "M " << s2;
    return 0;
}
