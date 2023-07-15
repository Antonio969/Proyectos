from collections import defaultdict

# mi_dic = {'uno': 'verde', 'dos':'azul', 'tres': 'rojo'}
# print(mi_dic['cuatro'])

mi_dic = defaultdict(lambda:'nada')
mi_dic['uno']= 'verde'
print(mi_dic['dos'])
print(mi_dic)
