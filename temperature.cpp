#include iostream

int main() {
    int choice;
    double input, output;
    stdcout  Choose temperature... n;
    stdcout  If you have temperature in Fahrenheit Enter 1 n;
    stdcout  If you have temperature in Celsius Enter 2 n;
    stdcin  choice;
    
    stdcout  Enter Temperatue  ;
    stdcin  input;
    switch(choice)
    {
        case 1
        output = ((input - 32)5)9;
        break;
        
        case 2
        output = ((9input)5) + 32;
        break;
        
        default 
        stdcout  Please enter number form above list...;
        break;
    }
    stdcout  Desired Temperature is   output;
}