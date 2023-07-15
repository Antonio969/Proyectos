mi_archivo = open('Prueba.txt')


FileContent=mi_archivo.readlines()

print(FileContent)

for l in mi_archivo:
    print('aqui dice: '+ l)

todas=mi_archivo.readlines()
#todas=todas.pop()

print(mi_archivo.read())

una_linea = mi_archivo.readline()
print(una_linea.upper())

una_linea = mi_archivo.readline()
print(una_linea)

una_linea = mi_archivo.readline()
print(una_linea)









mi_archivo.close()