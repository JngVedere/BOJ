//BOJ 4949 - SILVER 4
//https://www.acmicpc.net/problem/4949
#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(false);
    // cin.tie(NULL);
    
    bool ia[100];

    while(true){
        string s; cin >> s; int top = 0, sl = s.length();
        if(s==".") break;

        for(int i = 0; i < sl; i++){
            cout << "now " << s[i] << " " << top << "\n";
            if(s[i]=='(') ia[top++] = false;
            else if(s[i]=='[') ia[top++] = true;
            else if(s[i]==')'){
                if(!ia[top]&&top>0) --top;
                else{
                    cout << "no\n";
                    break;
                }
            }else if(s[i]==']'){
                if(ia[top]&&top>0) --top;
                else{
                    cout << "no\n";
                    break;
                }
            }
        }
    }

    return 0;
}