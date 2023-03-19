//BOJ 25206 - SILVER 5
//https://www.acmicpc.net/problem/25206
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

map<string, float> GRADE = {
    {"A+",4.5},
    {"A0",4.0},
    {"B+",3.5},
    {"B0",3.0},
    {"C+",2.5},
    {"C0",2.0},
    {"D+",1.5},
    {"D0",1.0},
    {"F",0.0}
};

int main(){
    string subj, grade;
    int M = 20;
    float credit = 0.0, credit_sum = 0.0, total_credit = 0.0;

    while(M--){
        cin >> subj >> credit >> grade;
        if(grade.compare("P")==0){
            continue;
        }else{
            total_credit += credit;
            credit_sum += credit * GRADE.at(grade);
        }
    }

    cout << fixed;
    cout.precision(6);

    if(!total_credit){
        cout << credit_sum;
    }else{
        cout << credit_sum/total_credit;
    }
    return 0;
}