class Padre:
    def hablar(self):
        print('Hola')

class Hijo(Padre):
    pass

class Madre:
    def reir(self):
        print('jajajaja')
    def hablar(self):
        print('que tal')


class Nieto(Hijo, Madre):
    pass



mi_nieto = Nieto()

mi_nieto.hablar()

print(Nieto.__mro__)