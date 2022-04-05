/* GESTION DINAMICA DE MEMORIA */
/* VECTOR DINAMICO DE OBJETOS */ 

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

#define N 5

int main()
{
		ALFA * P ;
		
		P = new ALFA[N] ;					
		
		for ( int I = 0 ; I < N ; I++ )
			(P+I)->FUNCION() ;
		
		delete[] P ;
								
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}




