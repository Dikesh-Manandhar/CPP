// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    
    int a[4];
    float tem[] = {19.5, 26.8};

    a[0] = 1;
    a[1] = 2;
    a[3] = 4;
    a[5] = 6;


    std::cout << "a[0] = " << a[0]<< std::endl << std::endl;
    std::cout << "a[1] = " << a[1]<< std::endl << std::endl;
    std::cout << "Temp 1 = " << tem[0]<< std::endl << std::endl;
    std::cout << "Temp 2 = " << tem[1]<< std::endl << std::endl;
    return (0);
}
