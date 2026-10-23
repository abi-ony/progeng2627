#include <iostream>

int main() {
    double multiple = 1; //acc for accumulator
    int n, i, acc = 0; //intitialise integers

    std::cin >> multiple >> n; //get input from user

    while(i < n){
        acc = acc + multiple;
        i = i + 1;
    }

 std::cout << multiple << " * " << n << " = " << acc << std::endl;
}

