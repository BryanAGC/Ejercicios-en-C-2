import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import solve_ivp

def f(x, y):
    return [y[1], (1 / (1 + np.exp(x)) - 2 * y[0] - 3 * y[1])]

# Condiciones iniciales
y0 = [0, 0]

# Rango de x
x_start = 0
x_end = 5

# Resolver la ecuación diferencial
sol = solve_ivp(f, [x_start, x_end], y0, dense_output=True)

# Generar puntos para graficar la solución
x = np.linspace(x_start, x_end, 100)
y = sol.sol(x)

# Graficar la solución
plt.plot(x, y[0])
plt.xlabel('x')
plt.ylabel('y')
plt.title('Solución de la ecuación diferencial')
plt.grid(True)
plt.show()
