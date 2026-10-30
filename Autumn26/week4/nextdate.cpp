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
//|

void nextDate(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    d2 = 0;
    m2 = 0;
    y2 = 0;

    //if long months are on their last day or short months are on their last day or if a non leap year feb is on the 28th or if a leap year feb is on the 129th
    if ((((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10)) && (d1 == 31)) || (((m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11) )) && (d1 == 30) || ((m1 == 2) && (d1 == 28) && (!leap_year(y1))) || ((m1 == 2) && (d1 == 29) && (leap_year(y1)))){
        
        //increment day and month
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else if ((m1 == 12) && (d1 == 31)){ //else if december is on its last day
        
        //increment day and year and month
        y2 = y1 + 1;
        d2 = 1;
        m2 = 1;
    }
    else{

        //increment day
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}

int main() { //testing main

    //initialise variables
    int d2 = 0;
    int m2 = 0;
    int y2 = 0;

    nextDate (15, 10, 2019, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (31, 12, 2003, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (28, 2, 2100, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (29, 2, 2004, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (31, 7, 2018, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (30, 7, 2024, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;

    nextDate (30, 4, 2025, d2, m2, y2);
    std::cout << d2 << "/" << m2 << "/" << y2 <<std::endl;
}