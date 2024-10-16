// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};//THE NAMES IN THIS ENUM DON'T HAVE A //SCOPE - THEY WORK LIKE GLOBAL VARIABLES
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

auto main() -> int{
//int main(){
    int meat = 8;//SINCE MEAT IS A LOCAL VARIABLE, IT IS USED IN THIS SCOPE
    //int a;
    cow_purpose a;

    //a = (int)cow_purpose::dairy;
    a = cow_purpose::meat;

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    //return (0);
}
