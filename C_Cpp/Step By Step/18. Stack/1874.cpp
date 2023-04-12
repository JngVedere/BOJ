//BOJ 1874 - SILVER 2
//https://www.acmicpc.net/problem/1874

#include <iostream>
#include <stack>
using namespace std;

int n,now = 1;
string ans = "";
bool f = true;
stack<int> is;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; cin >> n; T = n;
    while(T--){
        int k; cin >> k;
        while(now<=k){
            is.push(now);
            ans+="+\n";
            now++;
        }

        if(is.top()==k){
            is.pop();
            ans+="-\n";
        }else{
            f = false;
            break;
        }
    }

    if(!f) cout << "NO";
    else cout << ans;
    return 0;
}