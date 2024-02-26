#include <iostream>
#include <iomanip>
int main (){
    double a;
    double b;
    double c;
    double av;
    
    std::cin >>a;
    std::cin >>b;
    std::cin >>c;
    
    av = (a*2+b*3+c*5)/(2+3+5);
    
    std::cout <<"MEDIA = "<<std::fixed << std::setprecision(1)<<av<<std::endl;
    
    
}
