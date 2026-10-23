#include <iostream>

int main() {
    //declare integer variables
    int num, divisor, quotient = 0;

    std::cout << "What number is being divided?" << std::endl;
    std::cin >> num;

    std::cout << "What is the divisor?" << std::endl;
    std::cin >> divisor;

    while(num >= divisor){
        num = num - divisor;
        quotient ++;
    }

    std::cout << (quotient) << " * " << divisor << " + " << num;

}