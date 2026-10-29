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


int main(){
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "4^-2: " << mypow(4, -2) << std::endl;
}