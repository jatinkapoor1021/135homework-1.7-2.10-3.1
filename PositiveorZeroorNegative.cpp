#include <iostream>


int main()
{
    int number;  

    std::cout << "Please enter an integer: ";
    std::cin >> number; 

    
    if(number < 0) {
        std::cout << "The number is negative." << std::endl;
    }
    else if(number == 0) {
        std::cout << "The number is zero." << std::endl;
    }
    else {
        std::cout << "The number is positive." << std::endl;
    }

    return 0;
}