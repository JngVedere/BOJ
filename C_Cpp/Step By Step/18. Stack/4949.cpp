//BOJ 4949 - SILVER 4
//https://www.acmicpc.net/problem/4949
#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    stack<bool> is;

    while(true){
        bool f = true;
        string s; getline(cin,s);
        int l = s.length();
        if(s==".") break;

        for(int i = 0; i < l; i++){
            if(!f) continue;
            
            if(s[i]=='(') is.push(false);
            else if(s[i]=='[') is.push(true);
            else if(s[i]==')'){
                if(!is.empty()&&is.top()==false) is.pop();
                else f=false;
            }
            else if(s[i]==']'){
                if(!is.empty()&&is.top()==true) is.pop();
                else f = false;
            }
        }
        if(f&&is.empty()) cout << "yes\n";
        else cout << "no\n";
        stack<bool>().swap(is); //faster clear
    }

    return 0;
}