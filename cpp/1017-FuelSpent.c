#include <iostream>
#include <iomanip>
 
int main() {
    int t;
    int h;
    
    std::cin >> t;
    std::cin >> h;
    
    double x;
    
    x=(t*h)/12.0;
    
    std::cout<<std::fixed<<std::setprecision(3);
    std::cout << x<<std::endl;
 
    return 0;
}
