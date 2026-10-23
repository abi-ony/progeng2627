#include <iostream>

int main() {
    int num, curmax, curmin = 0;

    //get input from user
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> num;

    //initialise curmax and curmin
    curmax = num; 
    curmin = num;

    std::cout << "Maximum so far: " << curmax << std::endl;
    std::cout << "Minimum so far: " << curmin << std::endl;

    while(num != 0){

        //get input from user
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> num;

        //update min and max
        if(num > curmax){
            curmax = num; 
        }
        if(num < curmin){
            curmin = num; 
        }

        //print outputs
        std::cout << "Maximum so far: " << curmax << std::endl;
        std::cout << "Minimum so far: " << curmin << std::endl;

    }



}