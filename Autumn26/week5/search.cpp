#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }

    return -1;
}

int main(){ //testing main
    std::vector<int> v{4, 7, 2, 6, 6, 3};
    int expAns = 3; //expected return

    std::cout << (search_vector(6, v) - expAns) << std::endl;

    expAns = -1; //expected return
    std::cout << (search_vector(5, v) - expAns) << std::endl;
}
