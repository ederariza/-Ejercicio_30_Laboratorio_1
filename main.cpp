/*
Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int numero_A = rand();
    int numero_B = 0;
    int intentos = 0;
    while (numero_B != numero_A){

        cout << "Intente adivinar un numero: ";
        cin >> numero_B;

        if (numero_B > numero_A)
            cout << "B > A" << endl;

        else if (numero_B < numero_A)
            cout << "B < A" << endl;

        else
            cout << "B = A" << endl;



    }

    cout << "Intentos: " << intentos << endl;

    return 0;
}
