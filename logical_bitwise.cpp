#include <iostream>
#include <iomanip>
#include <bitset>

int main(){

    int COLUMN_WIDTH {20};
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101
	

    std::cout << std::setw(COLUMN_WIDTH) << "value1 : " 
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl; 
		
	std::cout << std::setw(COLUMN_WIDTH) << "value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;
    
	//AND
	std::cout << std::endl;
	std::cout << "Bitwise AND :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << std::endl;
    std::cout << std::endl;

	//OR
	std::cout << std::endl;
	std::cout << "Bitwise OR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << std::endl;
    std::cout << std::endl;


    //NOT
	std::cout << std::endl;
    std::cout << "Bitwise NOT " << std::endl;
	
    std::cout << std::setw(COLUMN_WIDTH) << "~value1 : "
		<< std::setw(COLUMN_WIDTH) <<  std::bitset<8>(~value1) << std::endl;
		
    std::cout << std::setw(COLUMN_WIDTH) << "~value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2) << std::endl;
		
    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001) << std::endl;//Using bin literal
		
    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59) << std::endl;//Using hex literal
    std::cout << std::endl; 


	//XOR
	std::cout << std::endl;
	std::cout << "Bitwise XOR :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2 : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2) << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
	std::cout << "Compound bitwise assignment operators" << std::endl;
	
	unsigned char sandbox_var{0b00110100}; // 8 bits : positive numbers only
	
	//Print out initial value
	std::cout << std::endl;
	std::cout << "Initial value :  " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;
	
	//Compound left shift
	std::cout << std::endl;
	std::cout << "Shift left 2 bit positions in place :  " << std::endl;
	sandbox_var <<= 2;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


    //Compound right shift
	std::cout << std::endl;
	std::cout << "Shift right 4 bit positions in place :  " << std::endl;
	sandbox_var >>= 4;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;

	//Compound OR with 0000 0010 to have all lower 4 bits turned on 
	std::cout << std::endl;
	std::cout << "Compound OR with 0000 0010 :  " << std::endl;
	sandbox_var |= 0b00001111;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


	//Compound AND with 0000 1100 to turn off the 2 lowest bits
	std::cout << std::endl;
	std::cout << "Compound AND with 0000 1100 :  " << std::endl;
	sandbox_var &= 0b000000000;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;


	//XOR with 00000011 to turn on the 4 lowest bits again
	std::cout << std::endl;
	std::cout << "Compound XOR with 0000 0011 :  " << std::endl;
	sandbox_var ^= 0b00000011;
    std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var : "
		<< std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
    std::cout << std::endl;

    return 0;
}