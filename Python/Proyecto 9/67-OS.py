import os
import shutil
#import send2trash

# print(os.getcwd())

# archivo = open('curso.txt', 'w')
# archivo.write('Texto de prueba')
# archivo.close()

# shutil.move('curso.txt', '/home/antoniob/Descargas/')

# send2trash.send2trash('curso.txt')
# print(os.walk('/home/antoniob/Descargas/'))

ruta = '/home/antoniob/Descargas/'
for carpeta,subcarpeta,archivo in os.walk(ruta):
    print(f'Las carpetas son: {carpeta}')
    for sub in subcarpeta:
        print(f'\t{sub}')
    print('Los archivos son: ')
    for arch in archivo:
        print(f'\t{arch}')
    print('\n')

