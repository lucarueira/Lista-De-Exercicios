"""
 Tendo como dado de entrada a altura (h) de uma pessoa, 
 construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7
"""
h = float(input("Digite a sua altura :  "))
homem = round( ((72.7*h) - 58),2)
mulher = round(((62.1*h) - 44.7),2)
print("Peso ideal para Homen = ",homem," Peso ideal mulher = ", mulher)
