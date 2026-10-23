#include <iostream>
#include <string>

int main (){
    std::string n;

    std:: cin >> n;

    while((n != "STOP") && (n != "stop") && (n != "Stop")){ //while n is not stop and ask user for next word
        std::cout << n << std::endl;
        std::cin >> n;
    }
}