#include <iostream>

int main(){
    int num, j = 0;
    

    //get input from user
    std::cout << "What is your number?" << std::endl;
    std::cin >> num;

    while (j < num){ //while rows is less than number stated
        int i = 0; //reset column counter
        
        while (i < num){ //draw a column while column is less than number stated
            std::cout << "*";
            i = i + 1; //increment column counter
        }

        std::cout << std::endl; //new row
        j++; //increment row counter
    }
}