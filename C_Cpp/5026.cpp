//BOJ 5026 - BRONZ 2
//https://www.acmicpc.net/problem/5026
#include <iostream>
#include <sstream>
using namespace std;
bool check;
int N, sum;
string s, tmp;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    while(N--){
        cin >> s;
        sum = 0;
        stringstream ss(s);
        if(s[0] == 'P') cout << "skipped\n";
        else{
            while(getline(ss, tmp, '+')) sum += stoi(tmp);
            cout << sum << "\n";
        }
    }
}