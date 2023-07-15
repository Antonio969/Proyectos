dic ={'Clave1':100, 'Clave2':200}

x=dic.popitem()
print(x)
print(dic)

texto=",:_#,,,,,,:::____##Pyt%on_ _Total,,,,,,::#"
x= texto.lstrip(",:%_#")
print(x)

frutas = ["mango", "banana", "cereza", "ciruela", "pomelo"] 
frutas.insert(3,'naranja')

marcas_smartphones = {"Samsung", "Xiaomi", "Apple", "Huawei", "LG"}

marcas_tv = {"Sony", "Philips", "Samsung", "LG"}

conjuntos_aislados= marcas_smartphones.isdisjoint(marcas_tv)