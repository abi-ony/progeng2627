#include <iostream>
#include <string>

int main() {
    double tempIn, tempOut;
    std::string unitIn, unitOut;

    //get temp from user
    std::cout << "What is your input temperature and unit?" << std::endl;
    std::cin >> tempIn >> unitIn;

    //declare boolean variable
    bool validUnit = true;

    if( (unitIn == "F") || (unitIn == "f") ){ //convert f to c
        unitOut = "C";
        tempOut = (tempIn - 32) * 5/9;
    }

    else if( (unitIn == "C") || (unitIn == "c") ){
        unitOut = "F"; //covert c to f
        tempOut = (((tempIn * 9) /5) + 32);
    }

    else{
        validUnit = false; //if unit is not valid
    }

    if (validUnit){ //if unit is valid then display conversion
        std::cout << tempIn << " " << unitIn << " is " << tempOut << " " << unitOut;
    }

    else{ //else display error message
        std::cout << "Error! Unit Not Recognised!" << std::endl;
    }
    



}