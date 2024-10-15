// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>//THE LETTER 'C' MEANS IT'S PART OF THE C STD LIBRARY

auto main() -> int{
//int main(){
    const size_t LENGTH1 = 25;
    //TWO CHARACTER ARRAYS AS IN C
    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";

    //TWO STRING OBJECTS AS IN C++
    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?";

    //CONCATENATING TWO CHARACTER ARRAYS - strncat or strcat_s (for WINDOWS) //FAMILY FUNCTIONS
    strncat(array_str1,array_str2,LENGTH1);//FIRST PART THE DESTINATION STRING
    std::cout << array_str1 << std::endl;

    //CONCATENATING TWO STRING OBJECTS - BOTH STRINGS REMAIN INTACT AFTER CONCAT
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    //return (0);
}
