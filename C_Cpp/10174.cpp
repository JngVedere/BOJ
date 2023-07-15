//BOJ 10174 - BRONZ 2
//https://www.acmicpc.net/problem/10174
#include <iostream>
#include <algorithm>
using namespace std;
int T;
string _, s, r;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    getline(cin, _);

    while(T--){
        getline(cin, r);
        transform(r.begin(), r.end(), r.begin(),[](unsigned char c){
            return tolower(c);
        });

        s = r;
        reverse(r.begin(), r.end());
        // cout << "s : " << s << " / r : " << r << "\n";
        if(s==r) cout << "Yes\n";
        else cout << "No\n";
    }
}