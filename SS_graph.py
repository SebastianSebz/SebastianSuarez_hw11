import numpy as np
import matplotlib.pyplot as plt

data = np.genfromtxt("tray.txt")
# Columnas del archivo.
# | x | v | t |

# Se grafica la posicion en funcion del tiempo y se guarda la grafica

plt.plot(data[:,0], data[:,2], color = 'r', lw = 4,label= 'x vs t')

plt.xlabel('t')
plt.ylabel('x')
plt.title(u'x vs. t')
plt.grid()
plt.legend()
plt.savefig('pos.png')

# Se grafica la velocidad en funcion del tiempo y se guarda la grafica

plt.plot(data[:,1], data[:,2],color = 'c', lw = 4,label= 'v vs t')

plt.xlabel('t')
plt.ylabel('v')
plt.title(u'v vs. t')
plt.grid()
plt.legend()
plt.savefig('vel.png')

# Se grafica la velocidad en funcion de la posicion y se guarda la grafica

plt.plot(data[:,1], data[:,0],color = 'k', lw = 4,label= 'v vs x')

plt.xlabel('x')
plt.ylabel('v')
plt.title(u'v vs. x')
plt.grid()
plt.legend()
plt.savefig('phase.png')

