#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile;
    infile.open("sentences.txt");

    //initialise vector
    std::vector<std::string> v;

    if(!infile.is_open()){ //if file doesn't open
        std::cout << "ERROR opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string temp; //to store file values

    while(infile >> temp){
        v.push_back(temp); //store file values in vector
    }

    infile.close();

    for (int i = 0; i < v.size(); i++){

        //print numbers in reversed order
        std::cout << v[(v.size() - (i+1))] << std::endl;
    }
}