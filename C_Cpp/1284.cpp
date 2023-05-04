//BOJ 1284 - BRONZ 3
//https://www.acmicpc.net/problem/1284
#include <iostream>
using namespace std;

int width[10] = {4,2,3,3,3,3,3,3,3,3};
string input;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        cin >> input;
        if(input == "0") break;
        else{
            int res = 1;
            int l = input.length();
            for(int i = 0; i < l; i++){
                int k = input[i] - '0';
                res += (width[k] + 1);
            }
            cout << res << "\n";
        }
    }
    return 0;
}