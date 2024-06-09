import numpy as np
import matplotlib.pyplot as plt

def solve_differential_eqn(f, y0, y_prime0, x_start, x_end, num_points):
    x = np.linspace(x_start, x_end, num_points)
    h = (x_end - x_start) / num_points
    y = np.zeros(num_points)
    y_prime = np.zeros(num_points)

    y[0] = y0
    y_prime[0] = y_prime0

    for i in range(1, num_points):
        y_prime[i] = y_prime[i-1] + h * f(x[i-1], y[i-1], y_prime[i-1])
        y[i] = y[i-1] + h * y_prime[i-1]

    return x, y

def f(x, y, y_prime):
    return 1 / (1 + np.exp(x)) - 2 * y - 3 * y_prime

# Condiciones iniciales
y0 = 1
y_prime0 = 2

# Rango de x
x_start = 0
x_end = 5

# Número de puntos
num_points = 1000

# Resolver la ecuación diferencial
x, y = solve_differential_eqn(f, y0, y_prime0, x_start, x_end, num_points)

# Graficar la solución
plt.plot(x, y)
plt.xlabel('x')
plt.ylabel('y')
plt.title('Solución de la ecuación diferencial')
plt.grid(True)
plt.show()
