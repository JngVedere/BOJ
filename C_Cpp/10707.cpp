//BOJ 10707 - BRONZ 1
//https://www.acmicpc.net/problem/10707
#include <iostream>
using namespace std;
int xp, yb, yl, yp, w, x, y;

int main(){
    cin >> xp >> yb >> yl >> yp >> w;

    x = xp * w;
    y = ((w > yl) ? (yb + (w - yl)*yp) : (yb));
    cout << (x > y ? y : x);
}