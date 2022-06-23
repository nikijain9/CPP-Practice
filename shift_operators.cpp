#include <iostream>
#include <bitset>

int main() {
    unsigned short int value {0xff0u};
    std :: cout << "Value: " << std :: bitset<16>(value) << " of dec " << value; std :: cout << std :: endl;

    value = static_cast<unsigned short int>(value << 4);
    std :: cout << "Value: " << std :: bitset<16>(value) << " of dec " << value;
    std :: cout << std :: endl;
    
    value = static_cast<unsigned short int>(value << 1);
    std :: cout << "Value: " << std :: bitset<16>(value) << " of dec " << value;

    return 0;
}