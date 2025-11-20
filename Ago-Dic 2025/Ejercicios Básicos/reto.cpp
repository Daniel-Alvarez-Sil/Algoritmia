// Lista = [a1, a2, aN]

// promedio = calcular_promedio(Lista)

// if (promedio es entero):
//     return 0
// else:
//     contador_spells = 1
//     while (promedio no es entero):
//         promedio = suma/(num_elementos-contador_spells)
//         contador_spells = contador_spells + 1
//     return contador

#include<bits/stdc++.h>
using namespace std; 

void resolver(int n, vector<int>& cristales){
    // Logica para resolver el problema 
    int resultado = 0; 

    // Termina el programa
    cout << resultado << '\n'; 
}

int main(){
    int n = 0; 
    cin >> n;  
    // int cristales2[n];
    vector<int> cristales(n);
    for (int f = 0; f < n; f++){
        cin >> cristales[f]; 
    }
    resolver(n, cristales); 
    return 0; 
}

// vector<int> cristales(n);
// n = 5
// cristales = [1, 10, 9, 5, 2]
// cristales[0] = 1
// cristales[1] = 10
// ....
// cristales[4] = 2
