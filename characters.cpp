/*'5'has the int value 53
if we write'5'-'0'it evaluates to 53-48,or the int5.
if we write charc='B'+ 32;thencstores'b' */

#include <iostream>

int main() {
    char letter = 65;
    std :: cout << "Letter is " << letter << std :: endl;
    std :: cout << "Numeric value of letter is " << (int)letter << std :: endl;

    char alphabet = 'b';
    std :: cout << "Numeric value of letter b is " << (int)alphabet << std :: endl;

    return EXIT_SUCCESS;
}