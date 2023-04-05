//BOJ 26069 - SILVER 4 
//https://www.acmicpc.net/problem/26069
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    bool f = false;
    int N,sz=0; cin >> N;
    unordered_set<string> s;
    string s1,s2;

    while(N--){
        cin >> s1 >> s2;
        if(!f && (s1=="ChongChong" || s2 == "ChongChong")){
            f=true;
            s.insert(s1); s.insert(s2);
            sz = 2;
            continue;
        }
        if(!f) continue;

        s.insert(s1); s.insert(s2);
        if(sz==s.size()-2){
            s.erase(s1); s.erase(s2);
        }else sz=s.size();      
    }
    cout << s.size();

    return 0;
}