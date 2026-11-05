#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    //initialising variables
    int num, ans = 0;
    std::vector<double> v;

    //get input from user
    std::cout << "How many elements do you want to store in the vector?" << std::endl;
    std::cin >> num;
    
    //traverse vector to have user input values
    for (int i = 0; i < num; i++){

        std::cout << "Please input element " << i+1 << std::endl;
        std::cin >> ans;
        v.push_back(ans);
    }
    
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}