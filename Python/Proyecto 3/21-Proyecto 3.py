texto=input("Ingresa un texto de tu agrado ").lower()
a=input("Ingresa tu letra favorita ").lower()
b=input("Ingresa tu inicial ").lower()
c=input("Ingresa la tercer letra de tu apellido ").lower()
letras=[a,b,c]
primer_letra = texto.split(letras[0])
segunda_letra = texto.split(letras[1])
tercer_letra = texto.split(letras[2])
esta_python = texto.split("python")
lt=len(texto)

inicio=texto[0]
final=texto[lt-1]

lista_r=texto.split()
lista_r.reverse()


print(f'''
1- La letra "{letras[0]}" aparecio un total de {len(primer_letra)-1} veces,
   la letra "{letras[1]}" aparecio un total de {len(segunda_letra)-1} y 
la letra "{letras[2]}" aparecio un total de {len(tercer_letra)-1} veces''')
tlista=texto.split()
print(f"2- Tu texto consta de {len(tlista)} palabras")
print(f'3- La primer letra es "{inicio}" y la ultima letra es "{final}"')
print(f'4- Las palabras en orden inverso son {" ".join(lista_r)}')
print(f'5- En el texto aparece la palabra "Python"? {bool(len(esta_python)-1!=0)}')


