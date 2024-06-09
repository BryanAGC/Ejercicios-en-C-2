import matplotlib.pyplot as plt

# Función para dibujar un círculo
def draw_circle(x, y, radius):
    circle = plt.Circle((x, y), radius, color='yellow')
    plt.gca().add_patch(circle)

# Función para dibujar un rectángulo
def draw_rectangle(x, y, width, height):
    rectangle = plt.Rectangle((x, y), width, height, color='red')
    plt.gca().add_patch(rectangle)

# Función para dibujar un triángulo
def draw_triangle(x1, y1, x2, y2, x3, y3):
    triangle = plt.Polygon([[x1, y1], [x2, y2], [x3, y3]], color='blue')
    plt.gca().add_patch(triangle)

# Función principal para dibujar un Pokémon
def draw_pokemon():
    # Dibuja el cuerpo del Pokémon (rectángulo)
    draw_rectangle(0, 0, 4, 4)

    # Dibuja la cabeza del Pokémon (círculo)
    draw_circle(2, 5, 1)

    # Dibuja los ojos del Pokémon (círculos pequeños)
    draw_circle(1.5, 5.5, 0.2)
    draw_circle(2.5, 5.5, 0.2)

    # Dibuja la boca del Pokémon (triángulo)
    draw_triangle(2, 4.5, 1.5, 4, 2.5, 4)

    # Muestra el dibujo del Pokémon
    plt.axis('scaled')
    plt.xlim(-1, 5)
    plt.ylim(-1, 6)
    plt.gca().set_aspect('equal', adjustable='box')
    plt.show()

# Llama a la función para dibujar el Pokémon
draw_pokemon()
