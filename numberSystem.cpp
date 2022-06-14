#include <iostream>

// Representatio of 15 in all Number Systems

int main() {
    int number1 = 15;           //Decimal
    int number2 = 0X0F;         //HexaDecimal
    int number3 = 017;          //Octal
    int number4 = 0b00001111;    //Binary

    std::cout << "Number1 = " << number1 << std::endl;
    std::cout << "Number2 = " << number2 << std::endl;
    std::cout << "Number3 = " << number3 << std::endl;
    std::cout << "Number4 = " << number4 << std::endl;

    return EXIT_SUCCESS;
}