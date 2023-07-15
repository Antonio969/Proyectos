def suma(*args):
    return sum(args)

print(suma(2,6,6,7,8,9,6,45,3,4,52,3,2))

def suma_cuadrados(*args):
    suma = 0
    for arg in args:
       suma += arg**2
        
    return suma