import re
import time
import datetime
import os
from pathlib import Path
import math

inicio = time.time()

ruta = '/home/antoniob/Documentos/programacion/Python/Mi_Gran_Directorio'

mi_patron = r'N\D{3}-\d{5}'

hoy = datetime.date.today()

nros_encontrados = []

archivos_encotrados = []

def buscar_numero(archivo, patron):
    este_archivo = open(archivo, 'r')
    texto = este_archivo.read()
    if re.search(patron, texto):
        return re.search(patron, texto)
    else:
        return ''
    

def crear_listas():
    for carpeta, subcarpeta, archivo in os.walk(ruta):
        for a in archivo:
            resultado = buscar_numero(Path(carpeta, a),mi_patron)
            if resultado != '':
                nros_encontrados.append((resultado.group()))
                archivos_encotrados.append(a.title())


def mostrar_todo():
    indice = 0 
    print('-'*50)
    print(f'Fecha de busqueda: {hoy.day}/{hoy.month}/{hoy.year}')
    print('-'*50)
    print('Archivo\t\t\tNRO. SERIE')
    print('-------\t\t\t\---------')
    for a in archivos_encotrados:
        print(f'{a}\t{nros_encontrados[indice]}')
        indice += 1
    print('\n')
    print(f'Numeros encontrados: {len(nros_encontrados)}')
    fin = time.time()
    duracion = fin - inicio
    print(f'Duracion de la busqueda: {math.ceil(duracion)}')
    print('-'*50)

crear_listas()
mostrar_todo()