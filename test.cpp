#include <iostream>

int main() {
    //VARIABLE BASED INITIALIZATION

    int some_var;
    int var_with_val {};
    int var1 {10};
    int var2 {15};

    std :: cout << some_var << std :: endl; //will print Garbage value
    std :: cout << var_with_val << std :: endl;
    int another_var {var1 + var2};
    std :: cout << another_var << std :: endl;

//  int narrowing_conversion {2.9};     //Warning or Compilation Error
    

    // FUNCTIONAL INITIALIZATION
    int new_var;
//  int var_val (); // this method of initialization will not work as compiler will consider it as a method
    int var3 (20);
    int var4 (30);
    int another_new_var ( var3 + var4);

    std :: cout << new_var << std :: endl;  //will print Garbage value
    std :: cout << another_new_var << std :: endl;

    //Information lost. Less safe than braced initializers
    int narrowing_conversion (2.9);     // this variable can store the non decimal part through Functional initialization
    std :: cout << narrowing_conversion << std :: endl;

    //ASSIGNMENT NOTATION
    int variable1 = 7;
    int variable2 = 2;
    int variable3 = variable1 + variable2;
    int narrowing_conversion_assignment = 2.9;

    std :: cout << variable1 << std :: endl;
    std :: cout << variable2 << std :: endl;
    std :: cout << variable3 << std :: endl;
    std :: cout << narrowing_conversion_assignment << std :: endl;

    std :: cout << sizeof(narrowing_conversion_assignment) <<std :: endl;

    return EXIT_SUCCESS;
}