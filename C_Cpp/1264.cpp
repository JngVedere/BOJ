//BOJ 1264 - BRONZ 4
//https://www.acmicpc.net/problem/1264

#include <iostream>
using namespace std;

string R = "aeiou";

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        string s; getline(cin,s);
        int r = 0, z = s.length();
        if(s == "#") break;
        
        for(int i = 0; i < z;i++){
            if(R.find_first_of(tolower(s[i]))<6) r++;
        }
        cout << r << "\n";
    }
    
    return 0;
}