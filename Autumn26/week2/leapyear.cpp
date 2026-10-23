#include <iostream>

int main() {
    int year; //declare year variable

    //get year from user
    std::cout << "Please enter a year" << std::endl;
    std::cin >> year;

    if((year % 4) == 0){ 
        //if year is divisible by 4

        if ((year % 100) == 0){
            //if it is also a multiple of 100

            if((year % 400) == 0){
                //if it is a multiple of 400
                std::cout << "It is a leap year";
            }

            else {
                std::cout << "It is not a leap year";
            }
        }

        else{
            //if it is divisible by 4 and not 100
            std::cout << "It is a leap year";
        }
    }

    else{
        //if not divisible by 4
        std::cout << "It is not a leap year";
    }

}