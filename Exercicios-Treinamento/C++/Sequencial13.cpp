#include <iostream>
using namespace std;
//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7
int main (){
    float h;
    cin >> h;
    float masc;
    masc = (72.7*h)-58;
    float fem;
    fem = (62.1*h)-44.7;

    cout << masc << "Homens"<<endl;
    cout << fem << "Mulheres"<<endl;

}