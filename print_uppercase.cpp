#include <iostream>


int main(){
            for( unsigned char i{0}; i < 255 ; ++i){
                
            //Don't modify anything above thie line
            //Your code goes below this line
            if (( i >= 65) && ( i <= 90)) {
                std :: cout << i;
                if( i != 90) {
                    std :: cout << " ";
                }
            }

            //Your code goes above this line
            //Don't modify anything after this line
        }
}
 