// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

auto main() -> int{
//int main(){
    std::vector<cow> cattle;
    cattle.push_back(cow("Betty",6,cow_purpose::meat));
    cattle.push_back(cow("Libby",4,cow_purpose::hide));
    cattle.push_back(cow("Trudy",5,cow_purpose::pet));
    cattle.push_back(cow("Betsy",2,cow_purpose::dairy));

    std::cout << std::endl;

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(),2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end()-1)->get_name() << std::endl;
    //return (0);
}
