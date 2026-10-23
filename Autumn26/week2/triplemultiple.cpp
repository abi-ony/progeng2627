#include <iostream>

int main() {
    int num, rem; //declare integers 

    std::cout << "Please enter a number" << std::endl;

    std::cin >> num;

    rem = num % 3; //remainder is from number divided by 3

    if(rem==0){
        std::cout << "This number is a multiple of 3" << std::endl;
    }

    else{
        std::cout << "This number is not a multiple of 3" << std::endl;
    }

}