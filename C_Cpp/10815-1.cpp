//BOJ 10815 - SILVER 5
//https://www.acmicpc.net/problem/10815
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    cin >> N;
    int* Ns = new int[N];
    for(int i = 0; i <N; i++){
        Ns[i] = i + 1;
        // cin >> Ns[i];
    }
    sort(Ns,Ns+N);

    cin >> M;
    int* Ms = new int[M];
    map<int,bool> sortedM;
    for(int i = 0; i <M; i++){
        Ms[i] = i + 1;
        // cin >> Ms[i];
        sortedM[Ms[i]] = false;
    }

    int i = 0, j = 0;
    while(j < M){
        cout << i << " & " << j << "\n";
        if(i==N){
            i=0;j++;
            continue;
        }

        if(Ns[i] == Ms[j]){
            sortedM[Ms[j]] = true;
            i = 0; j++;
            continue;
        }else if(Ns[i] > Ms[j]){
            i = 0; j++;
            continue;
        }else{
            i++;
        }
    }

    for(int k = 0; k < M; k++){
        cout << sortedM.find(Ms[k])->second << " ";
    }

    delete[] Ns;
    delete[] Ms;
    return 0;
}