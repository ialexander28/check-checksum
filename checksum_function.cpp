#include <iostream>

void isequal(double value); 

void isequal(double value){

    double v1 = 0xf; 
    double v2 = 0xf; 

    std::cout << "Enter a first value for v1 : " << '\n'; 
    std::cin >> v1; 

    std::cout << '\n'; 

    std::cout << "Enter a second value for v2 : " << '\n';
    std::cin >> v2;


        if(v1 == v2)
        std::cout << " The values are equal " << '\n'; 

        else 
        std::cout << " Values are not equal " << '\n'; 

        std::cout << '\n'; 
    
}

int main() 
{
    //basic check to see if 2 values are equal

    double value; 

    isequal(value); 

    std::cout << '\n'; 

    return 0; 
}