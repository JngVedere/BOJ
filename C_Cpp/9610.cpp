//BOJ 9610 - BRONZ 3
//https://www.acmicpc.net/problem/9610
#include <iostream>
using namespace std;
int n,x,y,coor[5] = {0};

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(x==0 || y == 0) coor[4]++;
        else if(x > 0 && y > 0) coor[0]++;
        else if(x < 0 && y > 0) coor[1]++;
        else if(x < 0 && y < 0) coor[2]++;
        else coor[3]++;
    }

    cout << "Q1: " << coor[0] << "\nQ2: " << coor[1] << "\nQ3: " << coor[2] << "\nQ4: " << coor[3] << "\nAXIS: " << coor[4]; 
}