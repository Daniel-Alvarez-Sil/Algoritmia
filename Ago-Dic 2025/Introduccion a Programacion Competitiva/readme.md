# Introducción a Programación Competitiva

En este readme, se detallan las bases de programación competitiva. La programación competitiva consiste en desarrollar un algorimtmo para resolver un problema planteado. Un problema consiste de tres partes: 
- **Descripción**: Problema a solucionar (mediante algoritmo)
- **Input**: Entrada (parametros que recibirá nuestro algoritmo)
- **Output**: Salida (respuesta)

Por lo tanto, a continuación, se estudiará el siguiente problema. 

> Nota: en su mayoría los progremas en programación competitiva, están en inglés. 

## 1. Problema. 

Link: [Boy or Girl](https://codeforces.com/problemset/problem/236/A)

### 1.1. Descripción. 
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

### 1.2. Input. 
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.


### 1.3. Output. 
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

# 2. Resolución. 

### 2.1. Idea del problema. 
Regla: si la cantidad de caracteres distintos es par ⇒ CHAT WITH HER!, si es impar ⇒ IGNORE HIM!.

### 2.2. Estrategia. 
1. Leer el string s.
2. Obtener el conjunto de letras distintas (elimina duplicados).
3. Contar cuántas letras únicas hay: k.
4. Decidir por paridad:
    - Si k % 2 == 0 → imprimir CHAT WITH HER!.
    - Si k % 2 == 1 → imprimir IGNORE HIM!.

### 2.3. Pseudocódigo.
```
entrada: s (cadena)
conjunto = vacío
para cada c en s:
    agregar c a conjunto
k = tamaño(conjunto)

si k % 2 == 0:
    imprimir "CHAT WITH HER!"
si no:
    imprimir "IGNORE HIM!"
```

### 2.4. Explicación.  
Ejemplo 1: 
- Entrada: wjmzbmr
- Letras distintas: {w, j, m, z, b, r} → 6
- 6 es par → CHAT WITH HER!

Ejemplo 2: 
- Entrada: xiaodao
- Letras distintas: {x, i, a, o, d} → 5
- 5 es impar → IGNORE HIM!

### 2.5. Solución.
La solución se encuentra en Python y C++ en los siguientes archivos: 
- **Python:** `Solucion.py`
- **C++:** `Solucion.cpp`