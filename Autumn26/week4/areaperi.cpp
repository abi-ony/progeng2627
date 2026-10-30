#include <iostream>

void rect(double len1, double len2, double& peri, double& area){

    peri = 2 * (len1 + len2);
    area = len1 * len2;
}

//mains testing
int main() {
    double perimeter, area;
    //call function

    rect(4, 5, perimeter, area);

    //print outputs
    std::cout << perimeter << "\t" << area;
}