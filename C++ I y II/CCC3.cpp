/* GESTION DINAMICA DE MEMORIA */
/* OPERADORES TRADICIONALES */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class ALFA {
		public :
				ALFA() ;
				~ALFA() ;
				void FUNCION();	
};

ALFA::ALFA()
{
		cout << "\n\n\t      CONSTRUCTOR\n";
		getchar();
}

ALFA::~ALFA()
{
		cout << "\n\n\t      DESTRUCTOR\n";
		getchar();
}

void ALFA::FUNCION()
{
		cout << "\n\n\t      ESTA ES LA FUNCION\n";
		getchar();
}



int main()
{
		ALFA * P ;
		
		P = (ALFA *)malloc ( sizeof(ALFA) ) ;					
		
		P->FUNCION() ;
		
		free(P) ;
								
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}




