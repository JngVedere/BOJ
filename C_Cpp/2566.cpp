//BOJ 2566 - BRONZ 3
//https://www.acmicpc.net/problem/2566
#include <iostream>
#include <string>
using namespace std;

int main(){
    string input_str;
    int M = 9;
    int input[9],c=1,r=1,max=0;
    while(M--){
        for(int i =0; i<9;i++){
            cin >> input[i];
            if(input[i]>max){
                max = input[i];
                c = 9-M; r = i+1;
            }
        }
    }
    cout << max << endl << c <<" "<< r ;
    return 0;
}