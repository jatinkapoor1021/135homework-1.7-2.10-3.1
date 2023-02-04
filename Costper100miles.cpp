#include<iostream>

int main() {

    int Gallons;
    std::cout<< "Enter the number of gallons of gas:";
    std::cin>> Gallons;

    float MilesPerGallon;
    std::cout<< "Enter the fuel efficiency in miles per gallon:";
    std::cin>> MilesPerGallon; 

    float PriceofGasPerGallon;
    std::cout<< "Enter the price of gas per gallon:";
    std::cin>> PriceofGasPerGallon;

    int Miles = 100; 
    float GallonsAmount = Miles / MilesPerGallon;
    float totalPrice = GallonsAmount * PriceofGasPerGallon; 
    std::cout << "The price to drive 100 miles is: " << totalPrice << std::endl;

    float HowFar= Gallons * MilesPerGallon;
    std::cout << "Possible miles with current gas: " << HowFar << std::endl;

    return 0;
} 

