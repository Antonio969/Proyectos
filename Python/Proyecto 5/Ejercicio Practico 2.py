def alfabetico(palabra):
    palabra=palabra.lower()
    lista=list(palabra)
    lista=set(lista)
    lista=list(lista)
    lista.sort()
    return lista
    

print(alfabetico('Aguacate'))

#otra solucion

def letras_unicas(palabra):


    mi_set=set()

    for letra in palabra:
        mi_set.add(letra)
    
    mi_lista=list(mi_set)
    mi_lista.sort()
    return mi_lista

print(letras_unicas('entretenido'))