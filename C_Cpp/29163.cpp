//BOJ 29163 - BRONZ 5
//https://www.acmicpc.net/problem/29163
#include <iostream>
using namespace std;
int N, tmp, o, e;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;

    while(N--){
        cin >> tmp;
        if(tmp%2==1) o++;
        else e++;
    }

    if(e>o) cout << "Happy";
    else cout << "Sad";
}