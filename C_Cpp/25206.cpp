//BOJ 25206 - SILVER 5
//https://www.acmicpc.net/problem/25206
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> GRADES = {"A+","A0","B+","B0","C+","C0","D+","D0","P"};
vector<float> SCORES = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};

int main(){
    string _, grade;
    float credit, credit_sum = 0, total_subjects = 0;
    int T = 20;
    while(T--){
        cin >> _ >> credit >> grade;
        if(!grade.compare("P")){
            continue;
        }else if(grade.compare("F")){
            auto iter = find(GRADES.begin(),GRADES.end(),grade);
            int index = distance(GRADES.begin(),iter);
            credit_sum += SCORES[index] * credit;
            total_subjects += credit;
        }
    }
    cout << fixed;
    cout.precision(6);
    if(total_subjects!=0){
        cout << credit_sum/total_subjects;
    }else{
        cout << "0.000000";
    }

}