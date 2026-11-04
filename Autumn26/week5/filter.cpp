#include <iostream>
#include <vector>

int main() {
    std::vector<int> v; //initialise vector
    int no, ans, t = 0; //declare variables

    //get input from user
    std::cout << "Please enter a number" << std::endl;
    std::cin >> no;

    for (int i = 0; i < no; i++){
        std::cout << "Please enter number " << i+1 << std::endl;
        std::cin >> ans;

        //set next index to new input
        v.push_back(ans);
    }

    //get maximum number
    std::cout << "What is your maximum number?" << std::endl;
    std::cin >> t;

    //traverse vector to print numbers less than t
    for (int i = 0; i < no; i++){
        if (v[i] < t){
            std::cout << v[i] << std::endl;
        }
    }
}