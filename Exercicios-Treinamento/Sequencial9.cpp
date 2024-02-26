#include <iostream>
using namespace std;
//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
//C = 5 * ((F-32) / 9).
int main (){
    float f;
    float c;
    cin >> f;
    c= (f-32)*(5/9);

    cout <<c<<" C"<<endl;
}