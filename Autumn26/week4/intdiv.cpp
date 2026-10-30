#include <iostream>

void intdiv(int a, int b, int& ans, int& rem){

    while (a >= b){ //while a is greater than or equal to be
       if ((a - b) > -1){ //if difference is positive or 0
        a = a - b; //subract a from b until a is too small
       
        ans ++; //add to quotient
       }
    }

    rem = a; //remainder calc
}

int main(){
    int ans = 0;
    int rem = 0;

    intdiv(27, 5, ans, rem);

    std::cout << "The answer to " << 27 << " divided by " << 5 <<" is " <<std::endl;
    std::cout << ans << " with remainder " << rem;
}