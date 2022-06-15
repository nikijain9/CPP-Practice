//Printing out a bool
// 0 --> False
// 1 --> True

/*A byte can store 256 different values

Using it just to cover two states(true/false)is wasteful,especially for
devices with hard memory constraints(think embedded devices)    */

#include <iostream>

int main() {
    bool red_light {false};
    bool green_light {true};

    if(red_light == true) 
        std :: cout << "STOP!" << std :: endl;
    else
        std :: cout << "Check for Green light" <<std :: endl;

    
    if(green_light)
        std :: cout << "Good to go!" << std :: endl;
    else
        std :: cout << "Wait!" << std :: endl;
    

    //SizeOf

    std :: cout << "Size of bool " << sizeof(bool) << " byte " << std :: endl;

    //Print out bool
    std :: cout << "Red Light is " << red_light << std :: endl;
    std :: cout << "Green Light is " << green_light << std :: endl;

    std :: cout << std :: boolalpha;
    std :: cout << "Red Light is " << red_light << std :: endl;
    std :: cout << "Green Light is " << green_light << std :: endl;
    
    return EXIT_SUCCESS;



}