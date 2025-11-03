# Cuatro conceptos de programación

En este proyecto se incluyen los principales componentes de un lenguaje de programación.  
Los ejemplos se encuentran en los siguientes archivos:
- **Python:** `Ejemplo.py`
- **C++:** `Ejemplo.cpp`

---

## 1. Variables
Se utilizan para almacenar datos en memoria.  
Diferentes tipos: 
- Enteros: 10
- Flotantes: 10.0
- String: "Ejemplo :)"
- Booleanos: True o False

```python
# Python
edad = 10
nombre = "Ejemplo1 :)"
altura = 10.0
bool_ejemplo = True
```
```cpp
// C++
int edad = 10;
string nombre = "Ejemplo2 :(";
float altura = 10.0;
bool bool_ejemplo = true;
```

## 2. Condiciones
Permiten ejecutar código dependiendo de si una expresión es verdadera o falsa.

```python
# Python
edad = 18
if edad >= 18:
    print("Eres mayor de edad")
else:
    print("Eres menor de edad")
```

```cpp
// C++
int edad = 18;
if (edad >= 18) {
    cout << "Eres mayor de edad" << endl;
} else {
    cout << "Eres menor de edad" << endl;
}
```


## 3. Sentencias de control (ciclos)
Permiten repetir una acción varias veces. Solo cubriremos los ciclos `for` y `while`.

### 3.1. `for`
El ciclo `for` recorre un rango, colección o secuencia. Suele expresarse con **tres componentes**:

1) **Inicialización**: crea/establece la variable de control (ejemplo: `int i = 0`).  
2) **Condición final**: evalúa si el ciclo continúa (ejemplo: `i < 5`).  
3) **Paso**: cómo cambia la variable de control en cada iteración (ejemplo: `i++`, `i += 2`, `i--`).

```python
# Python

# for con range(inicio, fin_exclusivo, paso): 
    # Inicialización: i = 0 (implícita en range)
    # Condición final: i < 5 (fin_exclusivo)
    # Paso: i += 1 (por defecto)
for i in range(0, 5, 1):
    print("Iteración:", i) # Salida: 0 1 2 3 4


# Paso personalizado
for i in range(0, 10, 2):
    print("Pares:", i) # Salida: 0 2 4 8 

# Decreciente
for i in range(5, 0, -1):
    print("Cuenta atrás:", i) # Salida: 5 4 3 2 1
```


```cpp
// C++

// for (inicialización; condición final; paso)
for (int i = 0; i < 5; i++) {          
    cout << "Iteración: " << i << ' ';
    // Salida: 0 1 2 3 4
}

// Paso personalizado
for (int i = 0; i <= 10; i += 2) {
    cout << "Pares: " << i << ' ';
    // Salida: 0 2 4 8 10
}

// Decreciente
for (int i = 5; i > 0; i--) {
    cout << "Cuenta atrás: " << i << ' ';
    // Salida: 5 4 3 2 1
}
```

> Nota: En Python, `range(inicio, fin_exclusivo, paso)` **NO INCLUYE** el límite superior. En C++, la condición la defines tú (ejemplo: `i < 5`).

### 3.2. `while`

Repite mientras una **condición booleana** sea verdadera. Tipicamente, se utiliza cuando uno no sabe cuántas iteraciones se necesitarán, es decir, numero de iteraciones es dinámico.


```python
# Python 
contador = 0
while contador < 5:
    print("Contador:", contador)
    contador += 1
# Salida: 0 1 2 3 4
```

```cpp
// C++
int contador = 0;
while (contador < 5) {
    cout << "Contador: " << contador << '\n';
    contador++;
}
// Salida: 0 1 2 3 4
```

## 4. Lectura y salida de datos
Para interactuar con el usuario para ingresar o mostrar información.

```python
# Python
nombre = input("¿Cuál es tu nombre? ") # Entrada
print("Hola,", nombre) # Salida
```

```cpp
// C++
string nombre;
cout << "¿Cuál es tu nombre? "; // Salida
cin >> nombre; // Entrda
cout << "Hola, " << nombre << endl; // Salida otra vez
```
## 5. Funciones
Las funciones agrupan instrucciones que se pueden reutilizar.

```python
# Python
def saludar(nombre):
    print("Hola,", nombre)

saludar("Algoritmia")
```
```cpp
// C++
void saludar(string nombre) {
    cout << "Hola, " << nombre << endl;
}

int main() {
    saludar("Andrés");
    return 0;
}
```
