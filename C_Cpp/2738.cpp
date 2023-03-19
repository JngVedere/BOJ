//BOJ 2738 - BRONZ 5
//https://www.acmicpc.net/problem/2738
#include <iostream>
#include <string>
using namespace std;

int main(){
    int c = 0,r = 0,add = 0;
    cin >> c >> r;
    int** arr = new int*[c];
    for(int i = 0; i < c; i++){
        arr[i] = new int[r];
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin >> add;
            arr[i][j] += add;
        }
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < c; i++){
        delete(arr[i]);
    }
    delete(arr);
    return 0;
}