import datetime
from datetime import datetime

# mi_hora = datetime.time(17,35,50,1500)
# mi_fecha = datetime.date(2025,10,17)

#print(type(mi_hora))
#print(mi_hora)
#print(mi_fecha)
#print(mi_fecha.year)
#print(mi_fecha.ctime())
#print(mi_fecha.today())

mi_fecha2 = datetime(2025,5,15,22,10,15,2500)

mi_fecha2 = mi_fecha2.replace(month = 11)


nacimiento = date(1995, 3, 5)
defuncion = date(2095, 5, 3)
vida = defuncion - nacimiento
