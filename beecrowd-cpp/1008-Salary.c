#include <iostream>
#include <iomanip>
int main (){
    int n;
    int h;
    float s;
    float t;
    std::cin >> n;
    std::cin >> h;
    std::cin >>s;
    
    t= h*s;
    
    std::cout <<"NUMBER = "<<n<<std::endl;
    std::cout <<"SALARY = U$ "<<std::fixed<<std::setprecision(2)<<t<<std::endl;
}
