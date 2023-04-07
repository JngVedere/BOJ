//BOJ 10773 - SILVER 4
//https://www.acmicpc.net/problem/10773

//stack 직접 구현
#include <iostream>
using namespace std;

#define SIZE 10

class Stack{
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size = SIZE);
    ~Stack();

    void push(int);
    int pop();
    int peek();

    int size();
    bool isEmpty();
    bool isFull();
};

Stack::Stack(int size){
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack(){
    delete[] arr;
}

void Stack::push(int x){
    if (isFull()){
        
    }
}

int main(){
    ios :: sync_with_stdio(false); cin.tie(NULL);

    int K,n,sum=0,top=0; cin >> K;
    int is[100000];
    
    while(K--){
        cin >> n;
        if(n) is[top++] = n;
        else --top;
    }

    while(top){
        sum+=is[--top];
    }
    cout << sum;

    return 0;
}