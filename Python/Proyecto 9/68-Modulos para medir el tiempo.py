import time

def prueba_for(numero):
    lista = []
    for num in range(1,numero +1):
        lista.append(numero)
    return lista

def prueba_while(numero):
    lista =[]
    contador = 1
    while contador <= numero:
        lista.append(contador)
        contador += 1
    return lista

inicio = time.time()
prueba_for(1500000)
final = time.time()

print(final - inicio)

inicio = time.time()
prueba_while(1500000)
final = time.time()

print(final - inicio)

