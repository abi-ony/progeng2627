#include <iostream>

bool smallest_factor(int n){

    int cf = 2; //cf for candidate factor
    
    while((cf < (n/2)+1)) { //while factor hasn't been found and cf is less than half of number
        if( (n % cf) == 0){ //if n can be divided by cf
            return 1;
        }
        cf++; //increment cf
    }

    return 0; //if factor not found
}

int main() {//testing function
    std::cout << (smallest_factor(13) == 0) << std::endl;
    std::cout << (smallest_factor(65) == 1) << std::endl;
    std::cout << (smallest_factor(41) == 0) << std::endl;
    std::cout << (smallest_factor(1) == 0) << std::endl;
}