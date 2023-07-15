def devolver_distintos(num1,num2,num3):
    lista=[]
    lista.append(num1)
    lista.append(num2)
    lista.append(num3)
    lista.sort()
    if num1+num2+num3>15:
        return lista[-1]
    elif num1+num2+num3<10:
        return lista[0]
    elif num1+num2+num3>=10 and num1+num2+num3<=15:
        return lista[1]

    

print(devolver_distintos(6,1,2,))


#solucion 2
def devolver_numero(a,b,c):
    suma=a+b+c
    lista=[a,b,c]
    if suma>15:
        return max(lista)
    elif suma<10:
        return min(lista)
    else:
        lista.sort()
        return lista[1]