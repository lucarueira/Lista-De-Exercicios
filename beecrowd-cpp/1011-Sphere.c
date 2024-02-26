#include <iostream>
#include <iomanip>
int main() {
    double raio;
    double volume;
    double pi = 3.14159;
    std::cin >> raio;
    
    volume = (4.0/3.0)*pi*(raio*raio*raio);
    
    std::cout << "VOLUME = "<<std::fixed<<std::setprecision(3)<<volume<<std::endl;
    
    return 0;
}
