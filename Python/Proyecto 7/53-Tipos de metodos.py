class Pajaro:
    #Atributos de clase
    alas = True
    #Atributos de instancia
    def __init__(self, color, especie):
        self.color = color 
        self.especie = especie

    def piar(self):
        print('pio mi color es {}'.format(self.color))
    
    def volar(self,metros):
        print(f'El pajaro ha volado {metros} metros')
        self.piar()

    def pintar_negro(self):
        self.color = 'negro'
        print('Ahora el pajaro es de color {}'.format(self.color))
    #Los metodos de lcases no necesitan una instancia para ser llamados
    @classmethod
    def poner_huevos(cls,cantidad):
        print(f'Puso {cantidad} de huevos')
        cls.alas = False
        print(Pajaro.alas)

    #No se relaciona con la istancia y tampoco puede cambiar los atributos de la clase
    @staticmethod
    def mirar():
        print('El pajaro mira')
        


piolin = Pajaro(especie = 'amarillo', color = 'canario')
print(piolin.especie)

piolin.volar(50)
piolin.piar()
piolin.pintar_negro()
piolin.alas = False
print(piolin.alas)

Pajaro.poner_huevos(9)

Pajaro.mirar()

