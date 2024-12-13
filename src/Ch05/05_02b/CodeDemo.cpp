// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

//int main()
//TAKES ARGUMENTS BY VALUE
int square(int x){
    x = x * x;
    return x;
}
//TAKES ARGUMENTS BY ADDRESS
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//TAKES ARGUMENTS BY REFERENCE
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

auto main() -> int {
    int a = 9, b;
    b = square(a);// TODO: square
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a,&b);// TODO: swap
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);// TODO: swap
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
