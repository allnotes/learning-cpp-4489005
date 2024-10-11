// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

//int main(){

int a,b = 5;/*GLOBAL VARIABLES ARE ALLOCATED IN THE DATA SEGMENT OF MEMORY, MANAGED STATICALLY BY THE COMPILER (SINCE THEY'RE ACCESSIBLE TO ALL PARTS OF THE CODE), AND ONCE THE PROGRAM ENDS THE MEMORY IS FREED. LOCAL VARIABLE ARE ONLY ACCESSIBLE WITHIN THEIR SCOPE AND SCOPES INSIDE OF IT, SO ONCE AN EXECUTION EXITS A SCOPE ITS VARIABLES ARE DELETED AND MEMORY IS FREED. THESE ARE AUTOMATIC VARIABLE BECAUSE THEY'RE MANAGED BY THE COMPILER AND ARE USUALLY ALLOCATED IN THE STACK SEGMENT OF MEMORY WHICH IS TEMPORARY*/

auto main() -> int{
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    std::cout << std::endl << std::endl;
    //return (0);
}
