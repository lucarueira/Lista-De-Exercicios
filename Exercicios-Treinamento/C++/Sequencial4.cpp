#include <iostream>

using namespace std ;
//Faça um Programa que peça as 4 notas bimestrais e mostre a média.
int main(){
    float a;
    float b;
    float c;
    float d;
    float media;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    media = (a+b+c+d)/4;

    cout << media;


}