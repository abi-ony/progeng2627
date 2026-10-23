#include <iostream>

int main () {

    //declare variables
    double weight, height, bmi;

    //get input from user
    std::cout << "What is your weight in kilogra84222222ms?" << std::endl;
    std::cin >> weight;

    std:: cout << "What is your height in metres?" << std::endl;
    std::cin >> height;

    bmi = weight / (height * height);

    std::cout << "Your bmi is " << bmi << ".";

}