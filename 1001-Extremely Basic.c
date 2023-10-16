#include <iostream>
#include <iomanip>
int main(){
    
    double r;
    double a;
    
    std::cin >> r;
    
    a = 3.14159*(r*r);
    
    std::cout << "A=" <<std::fixed << std::setprecision(4)<< a << std::endl;
    
}
