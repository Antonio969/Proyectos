from collections import Counter
numeros = [1,2,3,4,5,6,5,4,3,2,3,1,2]

print(Counter(numeros))

frase = 'Escribi algo aqui'
print(Counter(frase))

serie = Counter([1,2,2,3,3,3,4,4,4,4,5,5,5,5,5])

print(serie.most_common(1))

print(list(serie))