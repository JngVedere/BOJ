//BOJ 4779 - SILVER 3
//https://www.acmicpc.net/problem/4779

#include <iostream>
#include <cmath>
using namespace std;
int N;

void Cantor(int l){
    if(l == 1){
        cout << "-";
        return;
    }

    Cantor(l/3);
    for(int i = 0; i< l/3;i++) cout << " ";
    Cantor(l/3);
}


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    while(true){
        cin >> N;
        if(cin.eof()) break;
        Cantor(powl(3,N));
        cout << "\n";
    }
    return 0;
}
