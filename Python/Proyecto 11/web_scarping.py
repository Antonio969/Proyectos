import bs4
import requests

resultado = requests.get('https://escueladirecta-blog.blogspot.com/2023/05/configurando-la-impresion-perfecta-de.html')

# print(type(resultado))
# print(resultado.text)

sopa = bs4.BeautifulSoup(resultado.text, 'lxml')

# print(sopa.select('title')[0].getText())

# Extraer un parrafo
parrafoespecial = sopa.select('p')[3].getText()
# print(parrafoespecial)

# Extraer elementos de una clase

columna_lateral = sopa.select('.content p')
print(columna_lateral)