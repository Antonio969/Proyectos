diccionario = {'c1':'valor1','c2':'valor2'}
print(type(diccionario))
print(diccionario)

resultado = diccionario['c1']
print(resultado)

cliente = {'nombre':'Juan','apellido':'Fuentes','peso':88 , 'talla':1.75}
consulta=(cliente['nombre'])
print(consulta)

dic = {'c1':55,'c2':[10,20,30],'c3':{'s1':100,'s2':200}}
print(dic['c2'][1])
print(dic['c3']['s2'])
print(dic.keys())
print(dic.values())
print(dic.items())

di = {'c1':['a','b','c'],'c2':['d','e','f']}
print(di['c2'][1].upper())

d={1:'a',2:'b'}
print(d)
d[3]='c'
print(d)
d[2]= "B"
print(d)