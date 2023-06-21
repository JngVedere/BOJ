//BOJ 5575 - BRONZ 4
//https://www.acmicpc.net/problem/5575
#include <iostream>
using namespace std;
int hour[2], mnt[2], sec[2], res, R = 3;

int TTS(int h, int m, int s){
    return h * 3600 + m * 60 + s;
}

void STT(int s){
    int h = s / 3600;
    s %= 3600;
    int m = s / 60;
    s %= 60;
    cout << h << " " << m << " " << s << "\n";
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    while(R--){
        cin >> hour[1] >> mnt[1] >> sec[1] >> hour[0] >> mnt[0] >> sec[0];
        STT(TTS(hour[0], mnt[0],sec[0]) - TTS(hour[1], mnt[1],sec[1]));
    }
}