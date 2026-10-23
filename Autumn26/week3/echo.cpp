#include <iostream>

int main (){
    int n;

    std:: cin >> n;

    while((-11 < n) && (n < 11)){ //while n is in range repeat number and ask user for next integer
        std::cout << n << std::endl;
        std::cin >> n;
    }
}