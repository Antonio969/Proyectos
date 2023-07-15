from random import * 

aleatorio=randint(1,50)
print(aleatorio)

uniforme= round(uniform(1,5),1)
print(uniforme)

aleatorio1=random()
print(aleatorio1)

colores=['rojo','amrillo', 'azul']
aleatorio2=choice(colores)
print(aleatorio2)

numeros=list(range(5,50,5))
shuffle(numeros)
print(numeros)