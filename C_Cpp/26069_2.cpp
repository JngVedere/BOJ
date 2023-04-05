//BOJ 26069 - SILVER 4 
//https://www.acmicpc.net/problem/26069
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,sz=1; cin >> N;
    unordered_set<string> s;
    string s1,s2;
    s.insert("ChongChong");

    while(N--){
        cin >> s1 >> s2;
        s.insert(s1); s.insert(s2);
        if(sz==s.size()-2){
            s.erase(s1); s.erase(s2);
        }else sz=s.size();      
    }
    cout << s.size();

    return 0;
}