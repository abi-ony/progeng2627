#include <iostream>

int main() {
    int num, sum = 0; //initialise integers
    
    std::cout << "Please enter a number: " << std::endl;

    while (num != 0){ //while integer does not equal 0
        std::cin >> num;

        sum = sum + num; //running total algorithm

        //print sum
        std::cout << "The sum so far is: " << sum << std::endl;
        std::cout << "Please enter a number: " << std::endl; //ask for next input
    }
}