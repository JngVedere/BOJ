//BOJ 10773 - SILVER 4
//https://www.acmicpc.net/problem/10773
#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios :: sync_with_stdio(false); cin.tie(NULL);

    int K,n,sum=0,sz; cin >> K;
    stack<int> is;
    
    while(K--){
        cin >> n;
        if(n) is.push(n);
        else is.pop();
    }

    while(!is.empty()){
        sum+=is.top();
        is.pop();
    }
    cout << sum;

    return 0;
}
