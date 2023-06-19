//BOJ 9243 - BRONZ 2
//https://www.acmicpc.net/problem/9243
#include <iostream>
using namespace std;
int n, l;
string f,s;
bool R,A = true;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    R = (n%2==0);

    cin >> f >> s;
    l = f.length();
    for(int i = 0; i < l; i++){
        if((f[i]==s[i])!=R){
            A = false;
            break;
        }
    }

    if(A) cout << "Deletion succeeded";
    else cout << "Deletion failed";
}