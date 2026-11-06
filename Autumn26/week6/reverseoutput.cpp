#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; //initialise input file
    infile.open("input.txt"); //open input file

    std::vector<int> v; //initialise vector

    if(!infile.is_open()){//if infile not open
        std::cout << "ERROR opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int temp; //initialise temp variable

    while(infile >> temp){
        v.push_back(temp); //store in vector
    }

    infile.close(); //close infile

    std::ofstream outfile; //declare output file

    outfile.open("readOutput.txt"); //create or overwrite file

    if(!outfile.is_open()){//if file not open
        std::cout << "ERROR opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < v.size(); i ++){
        outfile << v[(v.size() - (i+1))] << std::endl; //prints output file in reverse order
    }

    outfile.close(); //close file
}