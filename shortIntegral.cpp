#include <iostream>

int main() {

    short int var1 = 10;        //2 bytes
    short int var2 = 20;

    char var3 = 40;             //1 bytes
    char var4 = 50;

    std :: cout << "Size of var1 is " << sizeof(var1) << std :: endl;
    std :: cout << "Size of var2 is " << sizeof(var2) << std :: endl;
    std :: cout << "Size of var3 is " << sizeof(var3) << std :: endl;
    std :: cout << "Size of var4 is " << sizeof(var4) << std :: endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4; 

    /* Since the compiler cannot really adopt the intergral types less than 4 bytes, in such case var3 will be transformed implicitly behind the scenes to a signed int i.e. 4 bytes. The same will be with var4. */

    
    std :: cout << "Size of result1 is " << sizeof(result1) << std :: endl;
    std :: cout << "Size of result2 is " << sizeof(result2) << std :: endl;

    return EXIT_SUCCESS;
}