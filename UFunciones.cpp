//
// Created by mbermejo on 1/09/2022.
//

#include "UFunciones.h"

unsigned long int esPrimo(unsigned long int num) {
    if (num == 1)
        return false;
    for( unsigned long int divisor=2;  divisor<num ; divisor++  )
       if( num% divisor == 0)
           return false;
    return true;
}



unsigned long int siguientePrimo(unsigned long int numero)
{ unsigned long int i=numero+1;

  while( !( esPrimo(i))  )
      i++;
  return i;
}