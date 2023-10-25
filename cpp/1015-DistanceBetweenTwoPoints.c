#include <iostream>
#include <iomanip> 
#include <cmath>
int main() {
    double x1;
    double x2;
    double y1;
    double y2;
    
    std::cin >>x1;
    std::cin >>y1;
    std::cin >>x2;
    std::cin >>y2;
    
    double p;
    
    p=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    std::cout<<std::fixed<<std::setprecision(4);
    std::cout<<p<<std::endl;
    
    
}
