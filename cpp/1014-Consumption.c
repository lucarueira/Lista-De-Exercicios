#include <iostream>
#include <iomanip> 
int main() {
 int x;
 float y;
 
 std :: cin >> x;
 std :: cin >> y;
 
 double tot;
 
 tot = x/y;
 
 std::cout<<std::fixed<<std::setprecision(3);
 std::cout<<tot<<" km/l"<<std::endl;
 
}
