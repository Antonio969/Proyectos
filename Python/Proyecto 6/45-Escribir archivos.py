archivo = open('Prueba.txt','a')
archivo.write('soy el nuevo texto \n')
archivo.write('soy otra linea')

archivo.writelines(['Hola', 'mundo', 'aqui', 'estoy'])

archivo.write('Bienvenido')



archivo.close()