#11. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
#  Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
#  salários até R$ 280,00 (incluindo) : aumento de 20%
#  salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
#  salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
#  salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
#  o salário antes do reajuste;
#  o percentual de aumento aplicado;
#  o valor do aumento;
#  o novo salário, após o aumento.

salario = float(input("Digite o salário : "))
if salario <= 280.00:
    reajuste= salario*0.2
    aumento = salario + reajuste
    print('Salário : R$ ',salario)
    print('Aumento de 20%')
    print('Valor do aumento R$ ', reajuste)
    print('Novo salário R$ ',aumento)
elif salario > 280 and salario < 700:
    reajuste= salario*0.15
    aumento = salario + reajuste
    print('Salário : R$ ',salario)
    print('Aumento de 15%')
    print('Valor do aumento R$ ', reajuste)
    print('Novo salário R$ ',aumento)
elif salario > 700 and salario < 1500:
    reajuste= salario*0.10
    aumento = salario + reajuste
    print('Salário : R$ ',salario)
    print('Aumento de 10%')
    print('Valor do aumento R$ ', reajuste)
    print('Novo salário R$ ',aumento)
else:
    reajuste= salario*0.05
    aumento = salario + reajuste
    print('Salário : R$ ',salario)
    print('Aumento de 5%')
    print('Valor do aumento R$ ', reajuste)
    print('Novo salário R$ ',aumento)
