#include <iostream>

#include <iomanip>

int main() {
    float number1 {1.12345678901234567890f}; // Precision : 7
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L}; 

    //print out the sizes
    std :: cout << "Size of float is " << sizeof(float) << std :: endl;
    std :: cout << "Size of double is " << sizeof(double) << std :: endl;
    std :: cout << "Size of long double is " << sizeof(long double) << std :: endl;

    //Precision
    std :: cout << std :: setprecision(20) << std :: endl;   
    std :: cout << "number1 is " << number1 << std :: endl;     // precision of 7
    std :: cout << "number2 is " << number2 << std :: endl;     // precision of 12 - 15
    std :: cout << "number3 is " << number3 << std :: endl;     // precision of 12 - 31

    //Float problems : The precision is usually too limited
    float number4 = 192400023.0f;       // Error : narrowing conversion
    std :: cout << "number 4 is " << number4 << std :: endl;

    std :: cout << "------------------------------" << std :: endl;
    
    double number5 = 1542314665;
    double number6 = 1.154885845e8;
    double number7 = 1.548e8;

    double number8 = 0.0000000000004548;
    double number9 = 3.459e-11;

    std :: cout << "number 5 is " << number5 <<std :: endl;
    std :: cout << "number 6 is " << number6 <<std :: endl;
    std :: cout << "number 7 is " << number7 <<std :: endl;
    std :: cout << "number 8 is " << number8 <<std :: endl;
    std :: cout << "number 9 is " << number9 <<std :: endl;
    return EXIT_SUCCESS;
}