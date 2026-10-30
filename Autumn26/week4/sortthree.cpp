#include <iostream>

void myswap(double& a, double& b){ //swap function
    double temp;

    temp = a;
    a = b;
    b = temp;
}


void sort_three_numbers(double& no1, double& no2, double& no3){
    if (no1 < no2){
        myswap(no1, no2); //swap if first number is smaller than the other
    }

    if (no2 < no3){
        myswap(no2, no3); //swap if first number is smaller than the other
    }

    if (no1 < no2){
        myswap(no1, no2); //swap if first number is smaller than the other
    }


}

int main(){ //main to test
    double N1, N2, N3;
    std::cout << "Please enter three numbers:" << std::endl;

    //get inputs from user
    std::cin >> N1 >> N2 >> N3;

    sort_three_numbers(N1, N2, N3);
    std::cout << N1 << "\t" << N2 << "\t" << N3 << std::endl;
}