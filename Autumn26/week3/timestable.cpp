#include <iostream>

int main(){
    int num, ans = 0;

    //get input from user
    std::cout << "What is your number?" << std::endl;
    std::cin >> num;

    //initialise, condition, increment
    for (int j = 0; j < num; j++){  //row increment
        ans = (j+1); //first number in row
        
        for (int i = 0; i < num; i++){ //column increment
            std::cout << ans << "\t"; //next number then space
            ans = ans + (j+1); //next column
            
             //column creator
        }

        std::cout << std::endl; //new row
    }


}