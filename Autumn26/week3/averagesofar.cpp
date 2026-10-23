#include <iostream>

int main() {
    //initialise variables
    int num = 1;
    double average, counter, sum;

    counter = 1;
    
    std::cout << "Please enter a number: " << std::endl;

    while (num != 0){ //while integer does not equal 0
        std::cin >> num;

        sum = sum + num; //running total algorithm
        average = sum / counter;

        //print sum
        std::cout << "The average so far is: " << average << std::endl;

        //increment counter
        counter += 1;

        std::cout << "Please enter a number: " << std::endl; //ask for next input
    }
}