#include <iostream>
#include <cmath>
using namespace std ;
//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//o produto do dobro do primeiro com metade do segundo .
//a soma do triplo do primeiro com o terceiro.
//o terceiro elevado ao cubo.
int main (){
    int a;
    int b;
    float c;
    cin >> a;
    cin >> b;
    cin >> c;

    float z;
    z=(a*2)*(b/2.0);
    float y;
    y=(a*3)+(c);
    float w;
    w= pow(c,3);
    cout <<z<<endl;
    cout <<y<<endl;
    cout<<w<<endl;

    


}
