#include <iostream>

bool leap_year(int year){
    bool ly;

    if((year % 4) == 0){ 
        //if year is divisible by 4

        if ((year % 100) == 0){
            //if it is also a multiple of 100

            if((year % 400) == 0){
                //if it is a multiple of 400
                ly = 1;
            }

            else {
                ly = 0;
            }
        }

        else{
            //if it is divisible by 4 and not 100
            ly = 1;
        }
    }

    else{
        //if not divisible by 4
        ly = 0;
    }

    return ly;
}

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;

}