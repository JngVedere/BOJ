//BOJ 2164 - SILVER 4
//https://www.acmicpc.net/problem/2164

#include <iostream>
#include <string>
#include <deque>
#include <sstream>
using namespace std;

int T,n;
string p,s_arr;
bool r = false,avail = true; //false -> pop_front, true -> pop_back
deque<string> dq_arr;


inline void R(){
    r = !r;
}

inline void D(){
    if(dq_arr.empty()){
        avail = false;
        return;
    }

    if(!r) dq_arr.pop_front();
    else dq_arr.pop_back();
}

deque<string> split(string str, char Delimiter){
    istringstream iss(str);
    string buffer;
    deque<string> result;

    while(getline(iss, buffer, Delimiter)) result.push_back(buffer);

    return result;
}

inline void init(){
    r = false;
    avail = true;
    deque<string>().swap(dq_arr); // clear deque in O(1)
}

inline void input(){
    cin >> p;
    cin >> n;
    cin >> s_arr;
}

void solve(){
    dq_arr = split(s_arr.substr(1,s_arr.length()-2),',');
    for(int i = 0; i < p.length(); i++){
        if(p[i]=='R') R();
        else D();
    }
}

void printer(){
    if(!avail){  //guard
        cout << "error\n";
        return;
    }

    if(dq_arr.empty()){
        cout << "[]\n";
        return;
    }

    if(!r){
        auto start = dq_arr.begin(), end = dq_arr.end();
        cout << "[" << *start;
        for(start++;start!=end;start++){
            cout<<","<<*start;
        } cout << "]\n";

    }else{
        auto start = dq_arr.rbegin(), end = dq_arr.rend();
        cout << "[" << *start;
        for(start++;start!=end;start++){
            cout<<","<<*start;
        } cout << "]\n";
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

    cin >> T;
    while(T--){
        init();
        input();
        solve();
        printer();
    }
    
    return 0;
}