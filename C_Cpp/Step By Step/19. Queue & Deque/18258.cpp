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
    int front();
    int back();
    bool isEmpty();
    bool isFull();
};

Queue::Queue(int size){
    _arr = new int[size];
    _capacity = size;
    _front = -1; //points where the front is
    _rear = -1; //point where the back is
    _count = 0; //the variable that iudicates indices
}

Queue::~Queue(){
    delete[] _arr;
}

void Queue::push(int x){
    if(isFull()) return;
    else{
        if(isEmpty()) _front = 0;
        _rear = (_rear + 1) % _capacity;
        _arr[_rear] = x;
        _count++;
    }   
}

int Queue::pop(){ //return front and remove it
    if(isEmpty()) return -1;
    
    int retVal = _arr[_front];
    _count--;

    if(_front == _rear) _front = _rear = -1;
    else _front = (_front + 1) % _capacity;   
    return retVal;
}

int Queue::size(){
    return _count;
}

int Queue::front(){
    if(isEmpty()) return -1;
    return _arr[_front];
}

int Queue::back(){
    if(isEmpty()) return -1;
    return _arr[_rear];
}

bool Queue::isEmpty(){
    return _front == -1;
}

bool Queue::isFull(){
    return (_front == 0 && _rear == _capacity-1) || (_rear == (_front - 1) % (_capacity - 1));
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,t; cin >> N;
    Queue cq(N);

    while(N--){
        string re;
        cin >> re;
        if(re=="push"){
            cin >> t;
            cq.push(t);
        }else if(re=="pop") cout << cq.pop() << "\n";
        else if(re=="front") cout << cq.front() << "\n";
        else if(re=="back") cout << cq.back() << "\n";
        else if(re=="size") cout << cq.size() << "\n";
        else if(re=="empty") cout << cq.isEmpty() << "\n";
    }
    
    return 0;
}