#include <iostream>

int main() {
    int choice;
    double input, output;
    std::cout << "Choose temperature... \n";
    std::cout <<  "To convert from Fahrenheit to Celsius Enter 1 : \n";
    std::cout <<  "To covert from Celsius to Fahrenheit Enter 2 : \n";
    std::cin >> choice;
    
    if(choice == 1 || choice == 2)
    {
    std::cout <<  "Enter Temperatue : ";
    std::cin >>  input;
    switch(choice)
    {
        case 1:
        output = ((input - 32)*5)/9;
        break;
        
        case 2:
        output = ((9*input)/5) + 32;
        break;
        
        default: 
        std::cout <<  "Please enter number form above list...";
        break;
    }
    std::cout <<  "Desired Temperature is "  << output;
    }
    else
    std::cout << "Please enter value listed above...";
}
