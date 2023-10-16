#include <iostream>
#include <iomanip>
int main(){
    
    float a;
    float b;
    float media;
    
    std::cin >> a;
    std::cin >> b;
    
    media = (a*3.5 + b*7.5)/(3.5+7.5);
    
    std::cout<<"MEDIA = " <<std::fixed << std::setprecision(5)<<media<< std::endl;
    
    
}
