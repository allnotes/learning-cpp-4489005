// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

auto main() ->int{
//int main(){
    
    int farenheit = 100;
    int celsius;

    celsius = ((float)5/9.0) * (farenheit - 32);
    std::cout << std::endl;
    std::cout << "Farenheit = " << farenheit << std::endl;
    std::cout << "Celsius = " << celsius << std::endl;

    float weight = 10.99;
    std::cout << std::endl;
    std::cout << "Float             : " << weight << std::endl;
    std::cout << "Integer part      : " << (int)weight << std::endl;
    std::cout << "Fractional part   : " << (int)((weight - (int)weight) * 10000) << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
