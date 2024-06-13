#8.Faça um programa que pergunte o preço de três produtos e 
#informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
produto1 = float(input("Digite o valor do primeiro peoduto : "))
produto2 = float(input("Digite o valor do segundo produto : "))
produto3 = float(input("Digite o valor do terceiro produto : "))
if ((produto1 < produto2) and (produto1 < produto3)):
    print("Primeiro produto mais barato R$ ",produto1)
elif((produto2<produto1)and(produto2<produto3)):
    print("Segundo produto mais barato R$ ",produto2)
else:
    print("Terceiro produto mais barato R$ ",produto3)