#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){ //testing main
    std::vector<double> v1{4.245, 8932, 132, 120, 1322, 10};
    std::vector<double> v2;

    //call filter func
    filter_v(v1, 150, v2);

    for (int i = 0; i < v2.size(); i ++){
        std::cout << v2[i] << std::endl;
    }
}
