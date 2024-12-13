// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

auto main() -> int{
//int main(){
    cow my_cow("Rose", 9, cow_purpose::dairy);
    //my_cow.age = 5;
    //my_cow.name = "Betsy";
    //my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    //return (0);
}
