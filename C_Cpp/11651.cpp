//BOJ 11651 - SILVER 5
//https://www.acmicpc.net/problem/11651
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<pair<int,int>> coor;
    int N,x,y;
    scanf("%d",&N);
    while(N--){
        scanf("%d %d",&x,&y);
        coor.push_back(pair<int,int>(x,y));
    }

    sort(coor.begin(), coor.end(), [=](std::pair<int, int>& a, std::pair<int, int>& b)
    {
        if(a.second!=b.second) return a.second < b.second;
        return a.first < b.first;
    }
    );
    
    for(auto iter = coor.begin(); iter!=coor.end();iter++){
        cout << iter->first << " " << iter->second << "\n";
    }
    return 0;
}