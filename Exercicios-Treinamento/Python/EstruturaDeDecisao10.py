#10.Faça um Programa que pergunte em que turno você estuda. 
# Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. 
# Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

turno = input('em que turno você estuda M-matutino ou V-Vespertino ou N- Noturno :')
while turno == 'm' or turno == 'M':
    print('matutino')
    break
while turno == 'v' or turno == 'V':
    print('Vespertino')
    break
while turno == 'n' or turno == 'N':
    print('Noturno')
    break
while True:
    print('Valor Inválido!')
    break