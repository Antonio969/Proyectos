class Vaca:
    def __init__(self, nombre):
        self.nombre = nombre
    
    def hablar(self):
        print(self.nombre + ' dice mu')

class Oveja:
    def __init__(self, nombre):
        self.nombre = nombre
    
    def hablar(self):
        print(self.nombre + ' dice beee')


vaca1= Vaca('Aurora')

oveja1=Oveja('Nube')

animales = [vaca1,oveja1]

def animal_habla(animal):
    animal.hablar()

animal_habla(vaca1)
animal_habla(oveja1)