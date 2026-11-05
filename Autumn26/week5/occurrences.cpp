#include <iostream>
#include <vector>

int main() {
    int n, s, ans = 0;
    std::vector<int> v;

    //get input from user
    std::cout << "How many numbers do you want to store?" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Please enter number " << i+1 << std::endl;
        
        std::cin >> ans;
        v.push_back(ans);
    }

    std::cout << "What number do you wish to find occurences of? " << std::endl;
    std::cin >> s;

    int total = 0; //initialising total for running total algorithm

    for(int i = 0; i <n; i++){
        if (v[i] == s){
            total ++;
        }
    }

    std::cout << "There are " << total << " occurences of " << s;
}