//BOJ 5073 - BRONZ 3
//https://www.acmicpc.net/problem/5073
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3] = {0,};
    while(true){
        scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
        if(!(arr[0]&&arr[1]&&arr[2])) break;
        sort(arr, arr + 3, greater<int>());

        if(arr[0] >= arr[1]+arr[2]) printf("Invalid\n");
        else if(arr[0]==arr[1]&&arr[1]==arr[2]) printf("Equilateral\n");
        else if(arr[0]!=arr[1]&&arr[1]!=arr[2]&&arr[0]!=arr[2]) printf("Scalene\n");
        else printf("Isosceles\n");
    }
    return 0;
}