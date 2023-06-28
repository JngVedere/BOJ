//BOJ 2774 - BRONZ 2
//https://www.acmicpc.net/problem/2774
#include <iostream>
#include <cstring>
#include <algorithm>
int T, l, b[10],c;
std::string n;

int main(){
    std::ios :: sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> T;
    while(T--){
        std::cin >> n;
        c = 0;
        memset(b, 0, sizeof(int)*10);
        l = n.length();
        // for(int i = 0; i < l; i++) std::cout << n[i] << " now " << n[i] - '0' << std::endl;
        for(int i = 0; i < l; i++) b[n[i] -'0']++;
        std::sort(b,b+10,std::greater<int>());
        // for(int i = 0; i < 10; i++) std::cout << b[i] << std::endl;
        for(int i = 0; i < 10; i++) if(b[i]!=0) c++; else break;
        std:: cout << c << "\n";
    }
    
    return 0;
}