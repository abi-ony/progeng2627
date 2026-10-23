#include <iostream>
#include <string>

int main() {
    int min, max, num = 0;
    bool found = 0; //initialising found as false
    std::string check, bounds;

    std::cout << "What is your upper limit? ";
    std::cin >> max;

    std::cout << "What is your lower limit? ";
    std::cin >> min ;

    while(found == 0){
        num = ((max-min) /2) + min; //make number midpoint of range

        std::cout << "Is your number " << num << "? Answer Y/N: ";
        std::cin >> check;

        if (check == "Y"){
            found = 1; //end loop
        }
        else{
            std::cout << "Select if the guess was higher or lower than your number? Answer H/L: ";
            std::cin >> bounds;
            if(bounds == "H"){ //if too high delete second half of range
                max = num;
            }
            else{ //if too low delete first half of range
                min = num;
            }
        }
    }

    //print output
    std::cout << "Your number is " << num;


}