//BOJ 3181 - BRONZ 2
//https://www.acmicpc.net/problem/3181
#include <iostream>
#include <sstream>
using namespace std;
bool flag = true;
string IGN[10] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
string fir, str, out = "", tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL); 

    getline(cin, str);
    stringstream ss(str);

    ss >> fir;
    out += toupper(fir[0]);

    while(ss >> tmp){
        flag = true;
        for(int i = 0; i < 10; i++){
            if(IGN[i] == tmp) flag = false;
        }
        if(flag) out += toupper(tmp[0]);
    }

    cout << out;
}