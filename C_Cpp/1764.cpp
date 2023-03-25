//BOJ 1764 - SILVER 4
//https://www.acmicpc.net/problem/1764
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N,M,b;
    scanf("%d %d",&N,&M);
    b = (N>M ? N : M);
    string* hear = new string[N];
    string* see = new string[M];
    vector<string> hearsee;
    for(int i = 0; i < N; i++){
        cin >> hear[i];
    }

    for(int j = 0; j < M; j++){
        cin >> see[j];
    }

    sort(hear,hear+N); sort(see,see+M);
    int i = 0,j = 0;
    while(i < N && j < M){
        int r = hear[i].compare(see[j]);
        if(r==0){
            hearsee.push_back(hear[i]);
            i++;
            j++;
        }else if(r < 0){
            i++;
        }else{
            j++;
        }
    }

    sort(hearsee.begin(),hearsee.end());

    cout << hearsee.size() << "\n";
    for(auto iter = hearsee.begin(); iter!= hearsee.end();iter++){
        cout << *iter << "\n";
    }

    delete[] hear;
    delete[] see;
    return 0;
}
