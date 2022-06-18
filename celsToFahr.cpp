#include <iostream>

int main() {
    float celsius;
    std :: cout << "Input Celsius: " << std :: endl;
    std :: cin >> celsius;

    float fahrenheit = (9.0 / 5) * celsius + 32;
    std :: cout << "The conversion of Celsius to Fahrenheit is: " << fahrenheit <<std :: endl;

    return EXIT_SUCCESS;
}