//BOJ 18258 - SILVER 4
//https://www.acmicpc.net/problem/18258
//Queue를 구현하자.

#include <iostream>
using namespace std;

#define SIZE 100

class Queue{
    int *_arr;
    int _capacity;
    int _front;
    int _rear;
    int _count;

public:
    Queue(int size = SIZE);
    ~Queue();

    void push(int x);
    int pop();
    int size();
    bool empty();
    int front();
    int back();
    bool isEmpty();
    bool isFull();
};

Queue::Queue(int size){
    _arr = new int[size];
    _capacity = size;
    _front = 0;
    _rear = -1;
    _count = 0;
}

Queue::~Queue(){
    delete[] _arr;
}

int Queue::pop(){
    if(isEmpty()) return -1;
    

}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    
    return 0;
}