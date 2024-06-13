#Faça um Programa que leia três números e mostre o maior deles.
numero1 =int(input("Numero 1 : "))
numero2 =int(input(" Numero 2 : "))
numero3 = int(input("Numero 3 : "))

if numero1 > numero2 and numero1 > numero3:
    print("Maior numero " , numero1)
elif numero2 > numero1 and numero2 > numero3 :
    print("Maior numero ",numero2)
else:
    print("Maior numero",numero3)

