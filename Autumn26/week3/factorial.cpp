#include <iostream>

int main () {
    //declare variables
    int num = 0;
    int ans = 1;

    //get number from user
    std::cout << "What number do you want to take the factorial of?" << std::endl;
    std::cin >> num;

    //intitialise, condition, increment
    for(int i = 0; i < num; i++){
        ans = ans * (i+1);
    }

    std::cout << num << "! = " << ans;
}