#include<bitset>
#include<iostream>
#include<iomanip>

int main() {
    const int COLUMN_WIDTH{20};

    const unsigned char mask_bit_0 {0b00000001} ;//Bit0
    const unsigned char mask_bit_1 {0b00000010} ;//Bit1
    const unsigned char mask_bit_2 {0b00000100} ;//Bit2
    const unsigned char mask_bit_3 {0b00001000} ;//Bit3
    const unsigned char mask_bit_4 {0b00010000} ;//Bit4
    const unsigned char mask_bit_5 {0b00100000} ;//Bit5
    const unsigned char mask_bit_6 {0b01000000} ;//Bit6
    const unsigned char mask_bit_7 {0b10000000} ;//Bit7
    
    //Acting Variable

    unsigned char var {0b00000000};     //starting with all bits off

    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;

    //Set bit 1
    std :: cout << "Setting bit in 1st position" << std :: endl;
    var |= mask_bit_0;
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;
    var |= mask_bit_1;
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;
    var |= mask_bit_5;
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;

    //RESETTING BITS : SET TO 0
    //Reseeting with &= (~mask)

    //Reset bit 1
    var &= (~mask_bit_0);
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;
    //Reset bit 2
    var &= (~mask_bit_1);
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;
    //Reset bit 3
    var &= (~mask_bit_5);
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;


    //SET all bits
    std :: cout << "Setting all bits" << std :: endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | 
            mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;

    //Reset bits at pos 0,2,4,6
	std::cout << "Reset bits at pos 0,2,4,6" << std::endl;
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std :: cout << std :: setw(COLUMN_WIDTH) << "Var : " 
            << std :: setw(COLUMN_WIDTH) << std :: bitset<8>(var) << std :: endl;

    return 0;
}