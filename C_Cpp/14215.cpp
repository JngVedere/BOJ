//BOJ 14215 - BRONZ 3
//https://www.acmicpc.net/problem/14215
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3];
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    sort(arr, arr + 3, greater<int>());
    if(arr[0] >= arr[1]+arr[2]) printf("%d", 2*(arr[1]+arr[2])-1);
    else printf("%d",arr[0]+arr[1]+arr[2]);
    return 0;
}