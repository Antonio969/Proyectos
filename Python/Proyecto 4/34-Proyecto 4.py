from random import *
intentos = 8
num_secreto=randint(1,101)
nombre = input('Hola, cual es tu nombre? ') 
print(f'{nombre} tienes {intentos} para adivinar un numero entre 1 y 100')

while intentos>0:
    numero = int(input('Dime el numero que estoy pensando '))
    if (numero<1) or (numero>100):
        print('Tu numero no esta en el rango solicitado')
        intentos=intentos
    elif numero<num_secreto and intentos> 0:
        print('Fallaste, pensaste en un numero menor')
        intentos -=1
        print(f'te quedan {intentos} intentos')
    elif numero>num_secreto and intentos> 0:
        print('Fallaste, pensaste en un numero mayor')
        intentos -=1
        print(f'te quedan {intentos} intentos')
    elif numero==num_secreto and intentos> 0:
        print(f'Felicitaciones es numero es {num_secreto}, acertaste en el intento {9 - intentos}')
        break

if intentos==0:
        print(f'{nombre} te has quedado sin intentos el numero que estaba pensando era {num_secreto}, mas suerte la proxima vez')
    
    