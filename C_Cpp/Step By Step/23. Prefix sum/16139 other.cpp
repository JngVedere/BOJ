//BOJ 16139 - SILVER 1
//https://www.acmicpc.net/problem/16139
#include <iostream>
using namespace std;

int count[26][200001] = {0};
int N, l, a, b;
string S;
char c;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> S; l = S.length();

    for(int i = 1; i <= l; i++){
        count[S[i-1] - 'a'][i]++;
        for(int j = 0; j < 26; j++) count[j][i] += count[j][i-1];
    }

    cin >> N;

    while(N--){
        cin >> c >> a >> b;
        cout << count[c - 'a'][b+1] - count[c - 'a'][a] << "\n";
    }
    
    return 0;
}