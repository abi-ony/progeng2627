#include <iostream>

//output vairable, func name, variable inputs
double mypow(double base, int exp){
    double result = base; //initialise result as base ^ 1

    if (exp > -1) {
        //initialise, condition, increment
        for(int i = 0; i < exp-1; i++){
            result = result * base; //multiply base by itself one less than exp
        }
    }
    
    else {
        exp = exp * -1; //make exponent positive so for loop can work
       
        //initialise, condition, increment
        for(int i = 0; i < exp-1; i++){
            result = result * base; //multiply base by itself one less than exp
        }
         
        result = 1/result; //inverse if negative exponent

    }
    return result;
}


int main (){
    double base, n, sum = 0.0;

    std::cout << "What is your base and n?" << std::endl;
    std::cin >> base;
    std::cin >> n;

    //initialise, condition, increment
    for (int i = 0; i < n; i ++){
        sum = sum + mypow(base, i+1);
    }

    //print sum
    std::cout << "The sum of powers is " << sum;
}