#include <iostream>

int max (int no1, int no2, int no3){

    if (no1 >= no2){ //if first number is larger
        if (no1 >= no3){
        return no1; //return no1
        }
        else{
            return no3;
        }
    }
    else if(no2 >= no3){
        return no2;
    }
    else{
        return no3;
    }
}

int main(){
    //testing functions
    std::cout << (max(3,3,2) == 3) << "\t" << (max (5, 7, 15) == 15) << "\t" << (max (25, 68, 25) == 68);
}