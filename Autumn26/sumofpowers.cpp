#include <iostream>
#include <cmath>

int main (){
    double base, n, sum = 0.0;

    std::cout << "What is your base and n?" << std::endl;
    std::cin >> base;
    std::cin >> n;

    //initialise, condition, increment
    for (int i = 0; i < n; i ++){
        sum = sum + std::pow(base, i+1);
    }

    //print sum
    std::cout << "The sum of powers is " << sum;
}