#include <iostream>
#include <string>
#include <iomanip>
int main() {
 std::string name;
 double a;
 double b;
 double tot;
 
 std::getline(std::cin,name);
 std::cin >> a;
 std::cin >> b;
 
 tot = (b*0.15)+a;
 
 std::cout << "TOTAL = R$" << std::fixed <<std::setprecision(2)<<tot<<std::endl;
        
}
