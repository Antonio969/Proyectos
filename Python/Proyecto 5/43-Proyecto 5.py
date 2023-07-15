from random import choice
#Juego del ahorcado 
palabras=['a','si','pan','agua','siete','libros','viernes','galantis','guajolote','helipuerto','encefalografista']
letras_correctas=[]
letras_incorrectas=[]
intentos=6
aciertos=0
juego_terminado=False

def elejir_palabra(lista_palabras):
    palabra_elejida=choice(lista_palabras)
    letras_unicas = len(set(palabra_elejida))
    return palabra_elejida, letras_unicas

def pedir_letra():

    letra_elejida=''
    es_valida=False
    abcedario='abcdefghijklmnopqrstuvwxyz'

    while not es_valida:
        letra_elejida=input('Elije una letra: ').lower()
        if letra_elejida in abcedario and len(letra_elejida)==1:
            es_valida=True
        else:
            print('No haas elejido una letra correcta')

    return letra_elejida

def mostrar_nuevo_tablero(palabra_elejida):
    lista_oculta=[]
    for l in palabra_elejida:
        if l in letras_correctas:
            lista_oculta.append(l)
        else: 
            lista_oculta.append('-')
    print(' '.join(lista_oculta))

def chequear_letra(letra_eljida, palabra_oculta, vidas, coincidencias):
    fin=False
    if letra_eljida in palabra_oculta and letra_eljida not in letras_correctas:
        letras_correctas.append(letra_eljida)
        coincidencias+=1
    elif letra_eljida in palabra_oculta and letra_eljida in letras_correctas:
        print('Ya has encontrado esa letra, intenta con otra diferente')
    else: 
        letras_incorrectas.append(letra_eljida)
        vidas-=1
    if vidas==0:
        fin=perder()
    elif coincidencias==letras_unicas:
        fin=ganar(palabra_oculta)
    return vidas, fin, coincidencias 

def perder():
    print('Te has quedado sin vidas')
    print('La palabra oculta era: '+ palabra)
    return True

def ganar(palabra_descubierta):
    mostrar_nuevo_tablero(palabra_descubierta)
    print('Felicitaciones has encontrado la palabra!!!')
    return True

palabra, letras_unicas=elejir_palabra(palabras)

while not juego_terminado:
    print('\n'+ '*'*20 + '\n')
    mostrar_nuevo_tablero(palabra)
    print('\n')
    print('Letras incorrectas: '+ '-'.join(letras_incorrectas))
    print(f'Vidas: {intentos}')
    print('\n'+ '*'*20 + '\n')
    letra=pedir_letra()
    intentos,terminado,aciertos=chequear_letra(letra,palabra,intentos, aciertos)
    juego_terminado=terminado
