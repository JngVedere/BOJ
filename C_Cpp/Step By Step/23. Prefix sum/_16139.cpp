//BOJ 16139 - SILVER 1
//https://www.acmicpc.net/problem/16139
#include <iostream>
using namespace std;
int count[26][2000] = {0}, sum[26] = {0}, check[26] = {0};
int N, l, tmp, li, ri, ans;
string S;
char ai;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> S; l = S.length();
    for(int i = 0; i < l; i++){
        tmp = S[i] - 'a';
        sum[tmp]++;
        count[tmp][i] = sum[tmp];
    }

    cin >> N;

    while(N--){
        cin >> ai >> li >> ri;
        tmp = ai - 'a';
        if(check[tmp] == 0){
            check[tmp] = 1;
            for(int i = 1; i < l; i++){
                if(count[tmp][i] > count[tmp][i-1]) continue;
                else count[tmp][i] = count[tmp][i-1];
            }   
        }
    
        li = (li ? li-1 : 0);
        ans = count[tmp][ri] - count[tmp][li];
        cout <<ans << "\n";
    }
    
    return 0;
}