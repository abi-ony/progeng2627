#include <iostream>

int main () {
    double pounds, euros;

    //get input from user
    std::cout << "What is your amount in British Pounds?" << std::endl;
    std::cin >> pounds;

    //calculate amount in euros
    euros = pounds * 1.18;

    //print value in euros
    std::cout << "Your amount in euros is " << euros;

}