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

int main(){
    int no1, no2;

    std::cout << "Please enter a range of two numbers: " << std::endl;
    std::cin >> no1 >> no2;

    std::cout << std::endl << "The range: " << std::endl << no1 << "\t" << no2 << std::endl;

    for(int i = no1; i < no2+1; i++){

        //print number if a factor is not found
        if (!smallest_factor(i)){
            std::cout << i << std::endl;
        }

    }

}