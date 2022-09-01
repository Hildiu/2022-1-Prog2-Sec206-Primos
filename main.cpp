/*----------------------------------------------------------------
 * Dato de Entrada:  num (unsigned long int) num>10
 * Dato de Salida:  sigPrimo, anteriorPrimo (unsigned long int)
 ---------------------------------------------------------------*/

#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{ unsigned long int numero;

    do{
        cout << "Numero {mayor a 10 ]:";
        cin >> numero;
    }while(numero<=10);

    cout << "El siguiente numero primo es : " << siguientePrimo(numero) << "\n";
    //cout << "El anterior numero primo es  : "  << anteriorPrimo(numero) << "\n";
    return 0;
}
