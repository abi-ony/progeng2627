#include <iostream>
int main() {
    int num, max = 0;
    int steps = 0; //declare variable

    std::cout << "What is your number?" << std::endl;
    std::cin >> num;

    while (num !=1){

        if((num % 2) == 0){ //if number is even
            num = num / 2;
        }
        else{ //if odd
            num = (num * 3) + 1;
        }

        if (num > max){
            max = num;
        }

        //print output
        std::cout << num << "\t";
        steps++; //increment steps
    }

    std::cout << std::endl << "1 is reached in " << steps << " steps and the maximum number is " << max;

}