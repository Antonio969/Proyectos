import os
from pathlib import Path

ruta = os.chdir('/home/antoniob/Documentos/programacion/Python/Temario/')

archivo = open('otro archivo.txt')

print(archivo.read())


ruta2 = '/home/antoniob/Documentos/programacion/Python/Prueba.txt'

elemento = os.path.split(ruta2)

print(elemento)

#os.rmdir('/home/antoniob/Documentos/programacion/Python/Temario/otra/')


otro_archivo = open('/home/antoniob/Documentos/programacion/Python/Prueba.txt')
print(otro_archivo.read())



carpeta= Path('/home/antoniob/Documentos/programacion/Python/Temario')
archivo = carpeta /'otro archivo.txt'

mi_archivo = open(archivo)
print(mi_archivo.read())