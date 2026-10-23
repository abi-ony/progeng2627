#include <iostream>
int main(){
    int n, ans, x = 0; //initialise n and x and answer
    ans = 1;

    //get n and x from user
    std::cout << "What is your number and what is the power you wish to raise x to?" << std::endl;
    std::cin >> x;
    std::cin >> n;

    //validate n >=0
    while (n < 0){ 
        std::cout << "Please ensure n >= 0" << std::endl;
        std::cin >> n;
    }

    //if n = 0, answer is 1. Else, repeated multiplication with for loop
    if (n > 0){
         //initialise, condition, increment
        for (int i = 0; i < n+1; i++){
          
            ans = ans * x; //repeated multiplication
            //print answer output
            std::cout << x << "^" << i << " = " << ans << std::endl;
        }
    }


}