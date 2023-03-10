#include <iostream>
using namespace std;

int main(){
    int input, result;
    cout << "it's running" << endl;
    std::cin >> input;
    result = int(input/4);

    for(int i=0;i<=result;i++){
        std::cout << "long ";
    }

    std::cout << "int";
    return 0;
}