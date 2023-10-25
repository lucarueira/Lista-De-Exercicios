#include <iostream>
#include <cmath>
int main () {
    int a;
    int b;
    int c;
    
    std:: cin >> a;
    std:: cin >>b;
    std::cin >>c;
    
    int maiorab;
    int maior;
    

    maiorab = (a+b+(abs(a-b)))/2;
    maior = (maiorab+c+(abs(maiorab-c)))/2;
    
    std::cout << maior<<" eh maior"<<std::endl;
    
}
