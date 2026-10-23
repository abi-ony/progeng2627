#include <iostream>

int main() {
    double n1, n2, product; //declares 3 number variables

    std::cout << "Please enter the first number" << std::endl; //newline
    std::cin >> n1;

    std::cout << "Please enter the second number" << std::endl;
    std::cin >> n2;

    product = n1 * n2; //answer stored in variable product

    std::cout << n1 << " * " << n2 << " = " << product << std::endl; //printing result


}