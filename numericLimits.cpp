#include <iostream>
#include <limits>

int main() {
    
    std :: cout << "The range of short is from " << std :: numeric_limits<short> :: min() << " to " << std :: numeric_limits<short> :: max() <<std :: endl;

    std :: cout << "The range of unsigned short is from " << std :: numeric_limits<unsigned short> :: min() << " to " << std :: numeric_limits<unsigned short> :: max() <<std :: endl;
    
    std :: cout << "The range of int is from " << std :: numeric_limits<int> :: min() << " to " << std :: numeric_limits<int> :: max() <<std :: endl;

    std :: cout << "The range of unsigned int is from " << std :: numeric_limits<unsigned int> :: min() << " to " << std :: numeric_limits<unsigned int> :: max() <<std :: endl;

    std :: cout << "The range of long is from " << std :: numeric_limits<long> :: min() << " to " << std :: numeric_limits<long> :: max() <<std :: endl;

    std :: cout << "The range of float is from " << std :: numeric_limits<float> :: min() << " to " << std :: numeric_limits<float> :: max() <<std :: endl;

    std :: cout << "The range(with lowest) of float is from " << std :: numeric_limits<float> :: lowest() << " to " << std :: numeric_limits<float> :: max() <<std :: endl;

    std :: cout << "The range(with lowest) of double is from " << std :: numeric_limits<double> :: lowest() << " to " << std :: numeric_limits<double> :: max() <<std :: endl;

    std :: cout << "The range(with lowest) of long double is from " << std :: numeric_limits<long double> :: min() << " to " << std :: numeric_limits<long double> :: max() <<std :: endl;

    std :: cout << "-------------------------" << std :: endl;

    std :: cout << "int is signed " << std :: numeric_limits<int> :: is_signed << std :: endl;
    std :: cout << "int digits " << std :: numeric_limits<int> :: digits <<std :: endl;

    
    return 0;

}