mi_lista=["a","b","c"]
otra_lista=["a", 4.5, 6]
resultado = len(mi_lista)
resultado1 = mi_lista[0:2]
lista = mi_lista+otra_lista
lista[0]="alpha"
lista.append("g")
eliminado = lista.pop(4)


print(type(mi_lista))
print(resultado)
print(resultado1)
print(mi_lista+otra_lista)
print(lista)
print(eliminado)

ultralista=["g","o",'b','m','c']
ultralista.sort()
print(ultralista)
ultralista.reverse()
print(ultralista)
