#include <iostream>

//output vairable, func name, variable inputs
int myfactorial(int in){
    
    int fact = 1; //initialise result

    //initialise, condition, increment
    for (int i = 0; i < in; i++){
        fact = fact * (i+1);
    }

    return fact; //return result
}

int main() {
    int n; //initialise integer

    std::cout << "Please enter a number" << std::endl;
    std::cin >> n; //get input from user

    std::cout << "The factorial of " << n << ": " << myfactorial(n);
}