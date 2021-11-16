#include <iostream>

void isequal(double value); 

void isequal(double value){

    double v1; 
    double v2; 

    std::cout << "Enter a first value for v1 : " << '\n'; 
    std::cin >> v1; 

    std::cout << '\n'; 

    std::cout << "Enter a second value for v2 : " << '\n';
    std::cin >> v2;

    if(v1 == v2)
    value = true; 


        if(value == true)
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

    return 0; 
}