#include <iostream>
#include <iomanip>
 
int main() {
    double a;
    double b;
    double c;
    double pi = 3.14159;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    
    //triangulo
    double tri = a*c/2.0;
    //circulo
    double circulo =pi*(c*c);
    //trapezio
    double trap = (a+b)*c/2.0;
    //square
    double quad = b*b;
    //retangle
    double ret = a*b;
    
    std::cout <<"TRIANGULO: "<<std::fixed<<std::setprecision(3)<<tri<<std::endl;
    std::cout <<"CIRCULO: "<<std::fixed<<std::setprecision(3)<<circulo<<std::endl;
    std::cout <<"TRAPEZIO: "<<std::fixed<<std::setprecision(3)<<trap<<std::endl;
    std::cout <<"QUADRADO: "<<std::fixed<<std::setprecision(3)<<quad<<std::endl;
    std::cout <<"RETANGULO: "<<std::fixed<<std::setprecision(3)<<ret<<std::endl;
    return 0;
}
