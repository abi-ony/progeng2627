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

int sum (int Base, int Exp){
    double sum = 0.0;
   
    //initialise, condition, increment
    for (int i = 0; i < Exp; i ++){
        sum = sum + mypow(Base, i+1);
    }

    return sum;
}

int main () {
    //testing functions
    std::cout << (sum(4, 5) == 1364) << "\t" << (sum(5, 3) == 155) << "\t" << (sum(2, 2) == 6);
}