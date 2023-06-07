//BOJ 1233 - BRONZ 2
//https://www.acmicpc.net/problem/1233
#include <iostream>
using namespace std;
int s1, s2, s3;
int bf[81] = {0}, max_num=0;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cin >>  s1 >> s2 >> s3;
    for(int i = 1; i <= s1; i++){
        for(int j = 1; j <= s2; j++){
            for(int k = 1; k <= s3; k++){
                bf[i+j+k]++;
                if(bf[i+j+k] > max_num) max_num = bf[i+j+k];
            }
        }
    }

    for(int i = 1; i <= s1+s2+s3; i++){
        if(max_num == bf[i]){
            cout << i;
            break;
        }
    }
    
    return 0;
}