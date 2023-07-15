from collections import namedtuple

mi_tupla = (500,12,54,23,12)

Persona = namedtuple('Persona',['nombre', 'altura', 'peso'])
ariel = Persona('Artist',1.76,79)
print(ariel.[2])
print(ariel.peso)