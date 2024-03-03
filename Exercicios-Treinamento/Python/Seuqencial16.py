"""
Faça um programa para uma loja de tintas. 
O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
Considere que a cobertura da tinta é de 1 litro para cada 3 metros 
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
"""
lugar = float(input("tamanho em metros quadrados da área a ser pintada : "))
litro = round((lugar/3),2)
lata=round((litro/18))
preco = round((lata*80.00),2)

print("Com ",lugar,"m² ")
print("Você vai usar : ",litro,"Litros")
print("Que são : ",lata,"Latas de tinta")
print("No valor de : " ,preco)