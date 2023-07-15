porcentaje=0.13
nombre=input("Cual es tu nombre? ")
print(f"Hola {nombre}")
venta=float(input("Cuanto has vendido este mes? "))
print(f"{nombre}, este mes ganaste ${round(venta*porcentaje,2)} en comisiones")
