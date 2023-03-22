//BOJ 11650 - SILVER 5
//https://www.acmicpc.net/problem/11650
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
        if(a.first!=b.first) return a.first < b.first;
        return a.second < b.second;
    }
    );
    
    for(auto iter = coor.begin(); iter!=coor.end();iter++){
        cout << iter->first << " " << iter->second << "\n";
    }
    return 0;
}