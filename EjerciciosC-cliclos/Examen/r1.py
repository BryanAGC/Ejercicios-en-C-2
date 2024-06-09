m = 10  # kg
c = 40  # N-s/m
k = 40  # N/m
x_initial = 0.03  # m
v_initial = 0.1  # m/s
t = 0  # s
t_final = 10  # s
dt = 0.01  # s

# Listas para almacenar los valores calculados
time_values = []
position_values = []

# Agregar los valores iniciales a las listas
time_values.append(t)
position_values.append(x_initial)

# Calcular la posición utilizando el método de Euler
while t < t_final:
    x = position_values[-1]
    v = v_initial
    a = (-c * v - k * x) / m

    x_new = x + v * dt
    v_new = v + a * dt

    t += dt

    time_values.append(t)
    position_values.append(x_new)

# Imprimir los resultados
for t, x in zip(time_values, position_values):
    print(f"Tiempo: {t:.2f} s, Posición: {x:.4f} m")