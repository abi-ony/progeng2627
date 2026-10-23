#include <iostream>

int main() {
    double Ctemperature, Ftemperature; //initialise variables

    //get input from user
    std::cout << "What is your temperature in celcius?" << std::endl;
    std::cin >> Ctemperature;

    //convert celcius to fahrenheit
    Ftemperature = (Ctemperature*1.8) + 32;

    //print farenheit temp
    std::cout << "Your temperature in Fahrenheit is " << Ftemperature << ".";


}