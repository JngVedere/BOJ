//BOJ 1408 - BRONZ 2
//https://www.acmicpc.net/problem/1408
#include <iostream>
#include <sstream>
using namespace std;
int s1, s2, cnt, time[3], res;
string st, ft, tmp;

int main(){
    ios :: sync_with_stdio(false);

    cin >> ft >> st;

    cnt = 0;
    stringstream ss(ft);
    while(getline(ss, tmp, ':')){
        time[cnt++] =  stoi(tmp);
    }
    s1 = time[0]*3600 + time[1]*60 + time[2];

    cnt = 0;
    stringstream sss(st);
    while(getline(sss, tmp, ':')){
        time[cnt++] =  stoi(tmp);
    }
    s2 = time[0]*3600 + time[1]*60 + time[2];

    res = s2 - s1;
    if(res < 0) res+=86400;

    time[0] = res/3600;
    res %= 3600;
    time[1] = res/60;
    res %= 60;
    time[2] = res;

    printf("%02d:%02d:%02d", time[0], time[1], time[2]);

    return 0;
}