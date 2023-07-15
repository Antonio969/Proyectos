from random import shuffle
# Lista inicial
palitos=['-','--','---','----']


# Mostrar palitos
def mezclar(lista):
    shuffle(palitos)
    return lista



# Pedirle intento
def probar_suerte():
    intento=''
    while intento not in ['1','2','3','4']:
        intento=input('Ingresa un numero del 1 al 4: ')

    return int(intento)


# Comprobar intento
def chequear_intento(lista, intento):
    if lista[intento-1]=='-':
        print('A lavar los platos')
    else:
        print('Esta vez te has salvado')


palitos_mezclados=mezclar(palitos)
seleccion=probar_suerte()
chequear_intento(palitos_mezclados,seleccion)


#Ejercicios
lista_numeros = [1,2,15,7,2,8]
def reducir_lista(lista):
        lista = set(lista)
        lista.sort()
        lista.pop(-1)
        return lista


reducir_lista(lista_numeros)
print(lista_numeros)
     
def promedio(lista):
     valor_medio = sum(lista)/len(lista)
     return valor_medio

lista_numeros = [1,2,15,7,2,8]
     
import random
     
def lanzar_moneda():
        resultado = random.choice(["Cara", "Cruz"])
        return resultado
     
def probar_suerte(moneda, lista):
        if moneda == "Cara":
            print("La lista se autodestruirá")
            return []
        elif moneda == "Cruz":
            print("La lista fue salvada")
            return lista

import random
     
def lanzar_dados():
    return random.randint(1,6), random.randint(1,6)
     
def evaluar_jugada(dado1, dado2):
        suma_dados = dado1 + dado2
        if suma_dados <= 6:
            return f"La suma de tus dados es {suma_dados}. Lamentable"
        elif suma_dados > 6 and suma_dados < 10:
            return f"La suma de tus dados es {suma_dados}. Tienes buenas chances"
        else:
            return f"La suma de tus dados es {suma_dados}. Parece una jugada ganadora"