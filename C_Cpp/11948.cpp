//BOJ 11948 - BRONZ 4
//https://www.acmicpc.net/problem/11948
#include <iostream>
using namespace std;
int min_score[2] = { 101, 101 }, f, sum;
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 4; i++){
        cin >> f;
        sum += f;
        if (f < min_score[0]) min_score[0] = f;
    }
    sum -= min_score[0];
    cout << min_score[0] << "\n";

    for(int i = 0; i < 2; i++){
        cin >> f;
        sum += f;
        if (f < min_score[1]) min_score[1] = f;
    }
    sum -= min_score[1];
    cout << min_score[1] << "\n";

    cout << sum;
}