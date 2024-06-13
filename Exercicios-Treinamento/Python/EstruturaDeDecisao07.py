#7.Faça um Programa que leia três números e mostre o maior e o menor deles.
n1 = int(input('Digite o primeiro numero '))
n2 = int(input('Digite o Segundo numero '))
n3 = int(input('Digite o Terceiro numero '))

if ((n1 > n2) and (n1 > n3)):
    print("Maior ",n1)
elif((n2 > n1) and (n2 > n3)):
    print("Maior",n2) 
else:
    print("Maior",n3)

if ((n1 < n2) and (n1 < n3)):
    print("Menor ",n1)
elif((n2 < n1) and (n2 < n3)):
    print("Menor",n2) 
else:
    print("Menor",n3)