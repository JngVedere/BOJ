//BOJ 3181 - BRONZ 2
//https://www.acmicpc.net/problem/3181
#include <iostream>
#include <sstream>
using namespace std;
int stack = 0;
bool flag = true;
char output[101];
string IGN[10] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
string fir, str, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> fir;
    output[stack++]= toupper(fir[0]);

    getline(cin, str);
    stringstream ss(str);
    while(getline(ss, tmp, ' ')){
        flag = true;
        for(int i = 0; i < 10; i++){
            if(IGN[i] == tmp) flag = false;
        }

        if(flag) output[stack++] = toupper(tmp[0]);
    }
    cout << output;
}