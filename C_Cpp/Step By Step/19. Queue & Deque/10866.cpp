//BOJ 10866 - SILVER 4
//https://www.acmicpc.net/problem/10866

#include <iostream>
using namespace std;
#define MAX_SIZE 10000

int N, t;
string c;

class Deque{
private:
    int arr[MAX_SIZE];
    int _front;
    int _back;

public:
    Deque();
    bool isEmpty();
    bool isFull();
    void push_front(int x);
    void push_back(int x);
    int pop_front();
    int pop_back();
    int front();
    int back();
    int size();
};

Deque::Deque(){
    _front = _back = 0;
}

bool Deque::isEmpty(){
    return _front == _back;
}

bool Deque::isFull(){
    return _front == (_back + 1) % MAX_SIZE;
}

void Deque::push_front(int x){
    if(isFull()) return;

    arr[_front] = x;
    _front = (_front - 1 + MAX_SIZE) % MAX_SIZE;
}

void Deque::push_back(int x){
    if(isFull()) return;

    _back = (_back + 1) % MAX_SIZE;
    arr[_back] = x;
}

int Deque::pop_front(){
    if(isEmpty()) return -1;

    int ret = front();
    _front = (_front + 1) % MAX_SIZE;
    return ret;
}

int Deque::pop_back(){
    if(isEmpty()) return -1;

    int ret = back();
    _back = (_back - 1 + MAX_SIZE) % MAX_SIZE;
    return ret;
}

int Deque::front(){
    if(isEmpty()) return -1;
    return arr[(_front+1)%MAX_SIZE];
}

int Deque::back(){
    if(isEmpty()) return -1;
    return arr[_back];
}

int Deque::size(){
    return _front <= _back ? _back - _front : (_back + MAX_SIZE) - _front;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    Deque dq;
    cin >> N;
    while(N--){
        cin >> c;
        if(c[1] == 'u'){ //case 1 :: push~
            cin >> t;
            if(c[5] == 'b') dq.push_back(t);
            else dq.push_front(t);

        }else if(c[1] == 'o'){ //case 2 :: pop~
            if(c[4] == 'b') cout << dq.pop_back() << "\n";
            else cout << dq.pop_front() << "\n";

        }else if(c[1] == 'r'){ //case 3 :: front
            cout << dq.front() << "\n";

        }else if(c[1] == 'a'){ // case 4 :: back
            cout << dq.back() << "\n";
            
        }else if(c[1] == 'i'){ // case 5 :: size
            cout << dq.size() << "\n";

        }else{ // case 6 :: empty
            cout << dq.isEmpty() << "\n";
        }
    }
    return 0;
}