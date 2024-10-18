// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

auto main() -> int{
//int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;
    average = 0.0f;
    for (int i = 0; i < numbers.size(); i++)
        average += numbers[i];
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;

    average = 0.0f;
    for (auto x: numbers)//WARNING: THE ELEMENT IS COPIED INTO THE VARIABLE EACH TIME SO IT COULD BE A BIG MEMORY DRAIN - YOU CAN USE A REFERENCE
        average += x;
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;
    std::cout << std::endl << std::endl;
    //return (0);
}
