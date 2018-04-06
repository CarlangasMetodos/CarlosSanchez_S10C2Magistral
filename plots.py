import numpy as np
import matplotlib.pyplot as plt

#Cargue de archivos en variables
datos=np.genfromtxt('Balondatos.dat',delimiter=",")

#Obtengo las columnas de cada archivo para poder hacer la grafica
tiempo=datos[:,0]
posicion=datos[:,1]

#Grafica de los archivos con respecto al tiempo
plt.figure()
plt.title('Movimiento de la pelota')
plt.plot(tiempo,posicion)
plt.xlabel('Tiempo')
plt.ylabel('Posicion')
plt.savefig('Grafica.png')
plt.show()
