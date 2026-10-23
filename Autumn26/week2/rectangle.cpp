#include <iostream>

int main() {
    //declaring variables
    double length1, length2, perimeter, area;

    //recieve sides from user
    std::cout << "What is the length of your first side?" << std::endl;
    std::cin >> length1;

    std::cout << "What is the length of your second side?" << std::endl;
    std::cin >> length2;

    //calculate perimeter and area
    perimeter = 2 * (length1 + length2);
    area = length1 * length2;

    //print results
    std::cout << "The perimeter of your rectangle is " << perimeter << ". The area of your rectangle is " << area << "." << std::endl;
}