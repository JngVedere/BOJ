//BOJ 23235 - BRONZ 5
//https://www.acmicpc.net/problem/23235
#include <iostream>
using namespace std;
int arr[100001];
int n,c=1;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);  
    while(true){
        cin >> n;
        if(n==0) break;
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << "Case " << c << ": Sorting... done!\n";
        c++;
    }
    return 0;
}