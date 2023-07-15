x= True

if x :
    print('si es correcto')


if 10 > 9:
    print('es correcto')

if 2 > 9:
    print('es correcto')
else:
    print('No es correcto')

mascota = 'perro'
if mascota == "gato":
    print('Tienes un gato')
elif mascota == 'perro':
    print('Tienes un perro')
else:
    print('No se que animal tienes')

edad = 16
calificacion=9
if edad <18:
    print('Eres menor de edad')
    if calificacion >= 7:
        print("Aprobado")
    else:
        print('No aprobado')
else:
    print('Eres adulto')