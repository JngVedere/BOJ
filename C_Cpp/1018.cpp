//BOJ 1018 - SILVER 4
//https://www.acmicpc.net/problem/1018
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define W 'W'
#define B 'B'

char CHESS1[64] = {W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W}; //STARTS WITH WHITE

char CHESS2[64] = {B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B,
                    B,W,B,W,B,W,B,W,
                    W,B,W,B,W,B,W,B}; //STARTS WITH BLACK

int diff(char* chess, char* input){
    int sum = 0;
    for(int i = 0; i < 64; i++){
        if(chess[i]!=input[i]) sum++;
    }
    return sum;
}

int main(){
    int N,M,c,r,res1,res2,min = 64; string input;
    char temp[64] = {'\0',};

    scanf("%d %d",&N,&M);
    char* arr = new char[N*M];

    for(int i = 0; i < N; i++){ //done
        cin >> input;
        strncpy(arr+M*i, input.c_str(), M);
    }

    for(int i = 0; i < N-7; i++){
        for(int j = 0; j < M-7; j++){
            for(int k = 0; k<8;k++){
                // cout << "temp["<<8*k<<"] & arr["<<M*i+M*k+j<<"]\n";
                strncpy(temp+8*k, arr+M*(i+k)+j, 8);
            }
        res1 = diff(CHESS1, temp);
        if (res1 < min){
            c=i,r=j;
            min = res1;
        }
        res2 = diff(CHESS2, temp);   
        if (res2 < min) {c=i;r=j;min = res2;}
        }
    }

    cout << min /*<< " " << c << "&" << r*/;
    delete[] arr;
    return 0;
}