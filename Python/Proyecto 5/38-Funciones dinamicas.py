

def chequear_3_cifras(lista):
    for n in lista:
        if n in range(100,1000):
            return True
        else:
            pass
    return False

resultado=chequear_3_cifras([55,99,23])
print(resultado)

def chequear_3_cifras(lista):
    lista_3_cifras=[]
    for n in lista:
        if n in range(100,1000):
            return lista_3_cifras.append(n)
        else:
            pass
    return lista_3_cifras


lista_numeros=[19,0,89,23-5]
def suma_menores(lista_numeros):
    x=0
    for n in lista_numeros:
        if n in range(0,1000):
             x+=n
        else:
            pass
    return x

lista_numeros=[19,0,89,23-5]
def cantidad_pares(lista_numeros):
    x=0
    for n in lista_numeros:
        if n%2==0:
             x+=1
        else:
            pass
    return x