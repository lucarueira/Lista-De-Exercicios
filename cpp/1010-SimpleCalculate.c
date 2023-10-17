#include <iostream>
#include <iomanip>
 
int main() {
    int a1;
    int a2;
    int b1;
    int b2;
    
    float c1;
    float c2;
    
    float t;
    
    std::cin >> a1;
    std::cin >> b1;
    std::cin >> c1;
    
    std::cin >> a2;
    std::cin >> b2;
    std::cin >> c2;
    
    t = (b1*c1)+(b2*c2);
    
    std :: cout<<"VALOR A PAGAR: R$ "<<std::fixed<<std::setprecision(2)<<t<<std::endl;
    return 0;
}
