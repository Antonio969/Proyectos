def suma():
    n1=int(input('numero 1: '))
    n2=int(input('numero 2: '))
    print(n1 + n2)
    print('Gracias por sumar' + n1 )


def pedir_numero():
    while True:
        try:
            numero = int(input('Dame un numero'))
        except:
            print('Ese no es un numero')
        else:
            print(f'Ingresaste el numero {numero}')
            break
    
    print('gracias')

pedir_numero()

'''try: 
    # Codigo que queremos probar
    suma()
except TypeError:
    # codigo a ejecutar si hay un error
    print('Estas intentando concatenar tipos distintos')
except ValueError:
    print('Ese no es un numero')
else:
    # Codigo que se va a ejecutar si no hay error
    print('Hiciste todo bien')
finally:
    # Codigo que se va a ejecutar de todos modos
    print('Eso fue todo')'''