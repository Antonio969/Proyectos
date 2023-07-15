monedas = 5
while monedas > 0:
    print(f"Tengo {monedas} monedas")
    monedas -= 1
else:print("No tengo monedas")

respuesta = 's'

while respuesta=='s':
    respuesta = input("quieres seguir? (s/n)")
else: print("Gracias")

while respuesta=='s':
    pass

nombre = input("Tu nombre: ")
for letra in nombre:
    if letra=="r":
        break
    print(letra)

nombre = input("Tu nombre: ")
for letra in nombre:
    if letra=="r":
        continue
    print(letra)
