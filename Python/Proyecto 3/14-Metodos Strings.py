texto = "Este es el texto de Antonio"
resultado = texto
resultado1 = texto[2].upper()
resultado2 = texto.lower()
resultado3 = texto.split()
resultado4 = texto.split("n")
resultado5 = texto.find("A")
resultado6 = texto.replace("Antonio","Aguacate")

print(resultado)
print(resultado1)
print(resultado2)
print(resultado3)
print(resultado4)
print(resultado5)
print(resultado6)

a = "Aprender"
b = "Python"
c = "es" 
d = "Genial"
e = " ".join([a,b,c,d])
f = "-".join([a,b,c,d])
print(e) 
print(f)