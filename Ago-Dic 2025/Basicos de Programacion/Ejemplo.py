

# 1. Variables
edad = 1
nombre = "Algoritmia"

# 2. Condiciones
if edad >= 18:
    print("Eres mayor de edad")
else:
    print("Eres menor de edad")

# 3. Sentencias de control (ciclos)
print("\nCiclo for:")
for i in range(3):
    print("Iteración", i)

print("\nCiclo while:")
contador = 0
while contador < 3:
    print("Contador:", contador)
    contador += 1

# 4. Lectura y salida de datos
nombre_usuario = input("\nIngresa tu nombre: ")
print("Hola,", nombre_usuario)

# 5. Funciones
def saludar(nombre):
    print("Un gusto verte,", nombre)

saludar(nombre_usuario)
