//BOJ 2108 - SILVER 3
//https://www.acmicpc.net/problem/2108
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;

bool sortByVal(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(){
    int N,avg,mid,oft,rng,max = 0;
    double sum = 0; map<int,int> count; vector<pair<int,int>> temp;
    scanf("%d",&N);
    int* x = new int[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&x[i]);
        sum += x[i];
        if(count.count(x[i])!=0){
            count[x[i]]+=1;
        }else{
            count[x[i]] = 1;
        }
    }

    for(auto iter1 = count.begin(); iter1 != count.end();iter1++){
        temp.push_back(make_pair(iter1->first,iter1->second));
    }

    sort(temp.begin(),temp.end(),sortByVal);
    
    if(temp[0].second == temp[1].second && temp.size() > 1){
        oft = temp[1].first;
    }else{
        oft = temp[0].first;
    }

    sort(x,x+N);
    avg = round(sum/((double)N));
    mid = x[N/2];
    rng = x[N-1] - x[0];
    printf("%d\n%d\n%d\n%d",avg,mid,oft,rng);
    return 0;
}