#include <iostream>
#include <vector>

void pay_less(){
    
    std::vector<double> unit_prices {10.4,21.5,14.0,15.2,7.9};
    std::vector<int> number_of_items{60,20,10,30,20,50};

    //Don't modify anything above this line
    //Your code should go below this line
    double least_cost{999};

    unsigned int count{0};
    while(count < 5){
        if((unit_prices[count] * number_of_items[count]) < least_cost){
            least_cost = unit_prices[count] * number_of_items[count];
        }
        ++count;
    }
    
    //Your code should go above this line
    //Don't modify anything below this line
    

    std::cout << "The least I can pay is  : " << least_cost;
}