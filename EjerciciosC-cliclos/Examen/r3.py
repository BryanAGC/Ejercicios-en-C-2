#grafica el resultado al siguente problema:
#Considere una masa de 10 kg que está unida a una pared por medio de un 
#resorte de constante k = 40 N/m y un amortiguador de constante c = 40 N-s/m. 
#El sistema se encuentra sobre una mesa horizontal y no existe fricción entre la masa y la mesa.
#La masa se coloca en una posición x(0) = 0.03 m y se suelta con velocidad v(0)= 0.1 m/s. 
#Determine la posición de la masa en el tiempo t. y lo grafique


import numpy as np
import matplotlib.pyplot as plt

def solve_spring_damping(m, c, k, x0, v0, dt, num_steps):
    # Inicializar arrays para almacenar los resultados
    t = np.zeros(num_steps)
    x = np.zeros(num_steps)

    # Condiciones iniciales
    x[0] = x0
    v = v0

    # Iterar para calcular la posición en cada paso de tiempo
    for i in range(1, num_steps):
        t[i] = i * dt

        # Calcular la aceleración
        a = (-c * v - k * x[i-1]) / m

        # Actualizar la velocidad y la posición
        v = v + a * dt
        x[i] = x[i-1] + v * dt

    return t, x

# Parámetros del sistema
m = 10  # masa (kg)
c = 40  # constante del amortiguador (N-s/m)
k = 40  # constante del resorte (N/m)
x0 = 0.03  # posición inicial (m)
v0 = 0.1  # velocidad inicial (m/s)

# Parámetros de tiempo
dt = 0.01  # tamaño del paso de tiempo (s)
num_steps = 1000  # número de pasos de tiempo

# Resolver el sistema
t, x = solve_spring_damping(m, c, k, x0, v0, dt, num_steps)

# Graficar la posición en función del tiempo
plt.plot(t, x)
plt.xlabel('Tiempo (s)')
plt.ylabel('Posición (m)')
plt.title('Movimiento de la masa')
plt.grid(True)
plt.show()
