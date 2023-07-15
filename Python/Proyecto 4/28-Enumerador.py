lista=['a','b','c']
for indice, item in enumerate(lista):
    print(indice,item)

mis_tuples=list(enumerate(lista))
print(mis_tuples)
    

lista_nombres = ["Marcos", "Laura", "Mónica", "Javier", "Celina", "Marta", "Darío", "Emiliano", "Melisa"]
for nombre in lista_nombres:
    if nombre.index("M")==0:
        print(nombre)
    else:
        continue    