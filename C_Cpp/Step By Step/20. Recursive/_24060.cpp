//BOJ 24060 - SILVER 4
//https://www.acmicpc.net/problem/24060

#include <iostream>
#include <vector>
using namespace std;

vector<int> A(500005);
vector<int> tmp(500005);
int N, K, cnt = 0, ans = -1;

void merge(vector<int> &A, int p, int q, int r){
    int i = p, j = q + 1, t = 0;
  
    while (i <= q && j <= r){
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }

    while (i <= q) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];

    i = p, t = 0;
    while (i <= r){
        A[i++] = tmp[t++];
        if (++cnt == K) ans = A[i - 1];
    }
}

void merge_sort(vector<int> &A, int p, int r){
    if (p < r){
        int q = (p + r) / 2;

        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main(){
    cin >> N >> K;
    
    for (int i = 0; i < N; i++) cin >> A[i];

    merge_sort(A, 0, N - 1);
    cout << ans;
   
    return 0;
}