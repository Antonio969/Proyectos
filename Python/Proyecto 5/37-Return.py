def multiplicar(numero1, numero2):
    total=numero1*numero2
    return total

resultado=multiplicar(5,10)
print(resultado)

palabra="Curso de Python"

def invertir_palabra(palabra):
    palabra=palabra[::-1]
    palabra=palabra.upper()
    return palabra

print(invertir_palabra(palabra))