palabra = 'python'
lista=[letra for letra in palabra]

print(lista)
 
lista2=[n for n in range(0,21,2)]
print(lista2)

lista3=[n for n in range(0,21,2) if n*2>10]
print(lista3)

lista3=[n if n*2>10 else 'no' for n in range(0,21,2) ]
print(lista3)

pies=[10,20,30,40]
metros=[p*3.281 for p in pies]
print(metros)