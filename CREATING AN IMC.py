
print ('DESCUBRA SEU IMC')

peso   = float (input ('Insira seu peso:'))
altura   = float (input ('Insira sua altura:'))

print ('Os valores estão corretos ?')

print  ('PESO:{}Kg'.format (peso))
print ('Altura: {}m'.format (altura))

h = altura * altura
imc = peso/h
print ('Seu imc é: {} '.format (imc))

print ('0...18,5 >> Abaixo do peso')
print  ('18,6...24.9 >> Peso normal')
print ('25...29,9 >> Sobrepeso')
print ('30...34,9 >> Obesidade grau 1')
print  ('25...39,9 >> Obesiade grau 2')






