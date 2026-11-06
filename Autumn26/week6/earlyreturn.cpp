#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> //for EXIT_FAILURE

int main(){
    std::string file;
    std::ifstream infile; //name file variable

    std::cout << "What file do you want to open?" << std::endl;
    std::cin >> file;

    infile.open(file);
    
    if(!infile.is_open()){ //if file is not open
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE; //terminate function main
    }

    //won't be executed if exit failure
    int temp = 0;

    while(infile >> temp){
        std::cout << temp << std::endl;
    }

    infile.close();
}