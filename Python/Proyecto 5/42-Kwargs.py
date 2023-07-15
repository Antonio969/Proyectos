def prueba(num1,num2,*args,**kwargs):
    print(f'El primer valor es {num1}')
    print(f'El segundo valor es {num2}')
    for arg in args:
        print(f'arg = {arg}')

    for clave,valor in kwargs.items():
        print(f'{clave} = {valor}')

args=[15,50,100,284,13,21393]
kwargs={'x':'uno','y':'cinco', 't':'ocho'}

prueba(12,56,*args,**kwargs)