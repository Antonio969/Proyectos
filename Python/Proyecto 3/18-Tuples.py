mi_tuple = (1,2,3,(123,9847),5, True, [67,89,"q"])
print(type(mi_tuple))
print(mi_tuple[-2])
mi_tuple=list(mi_tuple)
print(type(mi_tuple))
mi_tuple=tuple(mi_tuple)
print(type(mi_tuple))

t=(1,2,3,1)
x,y,z,r=t
print(x,y,z)
print(len(t))
print(t.count(1))
print(t.index(2))