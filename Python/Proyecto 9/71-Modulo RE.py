import re


texto = 'Si necesitas ayuda llama al (234)-345-2453 las 24 horas de servicio de ayuda online'


patron = 'ayuda'

# busqueda = re.findall(patron, texto)

# print(busqueda)

for hallazgo in re.finditer(patron, texto):
    print(hallazgo.span())

texto2 = 'llama al 324-123-3242 ya mismo'

patron = re.compile(r'(\d{3})-(\d{3})-(\d{4})')

resultado = re.search(patron, texto2)

print(resultado.group(1))

# Otro ejemplo

clave = input('Clave: ')

patron2 = r'\D{1}\w{7}'

chequear = re.search(patron2, clave)

# Otro ejemplo

texto3 = 'No atendemos los jueves por la tarde'

buscar = re.search(r'......demos|lunes| martes', texto3)

print(buscar)


