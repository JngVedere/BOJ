//BOJ 3009 - BRONZ 3
//https://www.acmicpc.net/problem/3009
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,bool> x,y;
    for(int i = 0; i < 3; i++){
        int a,b;
        scanf("%d %d", &a,&b);
        if(x.count(a) == 0) x[a] = false;
        else x[a] = true;
        if(y.count(b) == 0) y[b] = false;
        else y[b] = true;
    }

    for(auto iter = x.begin(); iter != x.end(); iter++){
        if(iter->second == false){
            printf("%d ",iter->first);
            break;
        }
    }

    for(auto iter = y.begin(); iter != y.end(); iter++){
        if(iter->second == false){
            printf("%d",iter->first);
            break;
        }
    }
    return 0;
}