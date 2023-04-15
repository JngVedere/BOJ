//BOJ 25501 - BRONZ 3
//https://www.acmicpc.net/problem/25501

#include <iostream>
#include <cstring>
using namespace std;
int T,cnt,ans;
char i[1001];

int recursion(const char* s, int l, int r){
    cnt++;
    if(l>=r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char* s){
    cout << recursion(s, 0, strlen(s)-1) << " ";
    return cnt;
}

void init(){
    cnt = 0;
}

int main(){
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> T;
    while(T--){
        init();
        cin >> i;
        cout << isPalindrome(i) << "\n";
    }
    return 0;
}