#include <iostream>

int max (int no1, int no2){

    if (no1 > no2){ //if first number is larger
        return no1; //return no1
    }
    else{
        return no2;
    }
}

int main(){
    //testing functions
    std::cout << (max(2,3) == 3) << "\t" << (max (329082, 2324) == 329082) << "\t" << (max (4,4) == 4);
}