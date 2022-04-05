/* SOBRECARGA Y POLIMORFISMO */ 
/* PROBLEMA PROPUESTO  */ 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "COMPLEJO.H"

using namespace std ;


int main()
{
		COMPLEJO X , Y , Z ;
		X.RE = 8 ;
		X.IM = 14 ;
		Y.RE = 17 ;
		Y.IM = -7 ;
		Z = 25 + X + Y + 12 ;
		cout << "\n\n   RESULTADO  =    " ;
		Z.VER();	
						
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}



