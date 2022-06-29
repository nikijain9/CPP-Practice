#include <vector>
#include <iostream>

void print_multiples_of_3() {

    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for ( int c : numbers) {
        if ( c % 3 == 0) 
            std :: cout << c << " ";
    }
}

int main() {

    print_multiples_of_3();
    
    return 0;
}