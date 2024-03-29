//BOJ 9184 - SILVER 2
//https://www.acmicpc.net/problem/9184
#include <iostream>
using namespace std;
int m[21][21][21] = {0,};
int a,b,c;

 int w(int a, int b, int c){
	if(a <= 0 || b <=0 || c <= 0) return 1; 
    
	if(a > 20 || b > 20 || c > 20) return w(20,20,20); 

	if(m[a][b][c] != 0)
		return m[a][b][c];
	
	if(a<b && b<c)
		return m[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
	
	return m[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    }
    

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);

  
    while(true){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a,b,c)  << "\n";
    }
    return 0;
}