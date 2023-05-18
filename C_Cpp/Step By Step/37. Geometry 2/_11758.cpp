//BOJ 11758 - GOLD 5
//https://www.acmicpc.net/problem/11758
#include <iostream>
using namespace std;
int x[3],y[3];
int m, c, t;
bool b;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    //Input
    for(int i = 0; i < 3; i++) cin >> x[i] >> y[i];

    //Calibration
    for(int i = 2; i >= 0; i--){
        x[i] -= x[0];
        y[i] -= y[0];
    }

    //Get a line function
    m = (x[2]-x[0] == 0 ? 0 : (y[2]-y[0])/(x[2] -x[0]));
    c = y[1] - m * x[1]; 

    //Comparison
    t = m * x[0] + c;
    b = t > y[0];

    //Coordinate Calculating
    if(x[0] >= 0 && y[0] >= 0){ //1st coor grid

    }else if(x[0] < 0 && y[0] > 0){ //2nd coor grid

    }else if(x[0] > 0 && y[0] > 0){ //3rd coor grid

    }else{

    }
    return 0;
}