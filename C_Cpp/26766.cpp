// BOJ 26766 - BRONZ 5
//https://www.acmicpc.net/problem/26766
#include <iostream>
#include <string>
using namespace std;
int n;
string s = R"( @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     )";

int main(){
    cin >> n;
    while(n--){
        cout << s << "\n";
    }
}