#include <iostream>

int main(){
    int n = 0; 
    int cf = 2; //cf for candidate factor
    bool found = 0; //declare variables

    std::cout << "Enter an integer greater than 1: ";
    std::cin >> n;

    while((found == 0) && (cf < (n/2)+1)) { //while factor hasn't been found and cf is less than half of number
        if( (n % cf) == 0){ //if n can be divided by cf
            found = 1; //found is true
        }
        cf++; //increment cf
    }

    if(found){
        std::cout << "The number is not prime" << std::endl;
    }
    else{
        std::cout << "The number is prime" << std::endl;
    }
}