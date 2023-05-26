//BOJ 16139 - SILVER 1
//https://www.acmicpc.net/problem/16139
#include <iostream>
using namespace std;
int count[26][2000] = {0}, sum[26] = {0};
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

    for(int i = 0; i < 26; i++){
        cout << (char)(i+'a') << " ";
        for(int j = 0; j < l; j++) cout << count[i][j] << " ";
        cout << endl;
    }

    while(N--){
        cin >> ai >> li >> ri;
        tmp = ai - 'a';
        ans = count[tmp][ri] - count[tmp][li];
        cout << tmp << ' ' <<ans << "\n";
    }
    
    return 0;
}