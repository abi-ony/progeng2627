#include <iostream>
#include <string> //importing string characteristics

int main() {
    //declare variables
    double lengthIn, lengthOut; 
    std::string unitIn, unitOut;

    const double mileToKm = 1.609; //const to initialise variable

    std::cin >> lengthIn >> unitIn; //getinput

    if(unitIn == "km"){ //if km divide by mile ratio
        unitOut = "mile";
        lengthOut = lengthIn / mileToKm;

        //display output
        std::cout << lengthOut << " " << unitOut << std::endl;

    }
 
    else if(unitIn == "mile"){ //if mile, multiply by mile ratio
        unitOut = "km";
        lengthOut = lengthIn * mileToKm;
        
        //display output
        std::cout << lengthOut << " " << unitOut << std::endl;
    }

    else{ //if not correcut unit, display error message
        std::cout << "error, unit not recognised " << std::endl;
    }

    ;
}

