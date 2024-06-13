#Faça um Programa que verifique se uma letra digitada é "F" ou "M". 
# Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
letra = input("Digite M ou F : ")
if letra.upper()=='F':
    print("A letra foi F")
elif letra.upper()=='M': 
    print("A letra foi M ")
else :
    print ("ERRO")

