/* OPERADOR & */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

void FUNCION ( int );
void FUNCION ( int * );
void FUNC ( int & );

int main()
{
		int A ;
		A = 25 ;
		cout << "\n\n\n  TRANSFERENCIA POR VALOR \n" ;	
		cout << "\n\n  ANTES DE LA FUNCION     A = " << A ;	
		FUNCION (A) ;
		cout << "\n\n  DESPUES DE LA FUNCION   A = " << A ;	
				
		A = 33 ;
		cout << "\n\n\n\n\n  TRANSFERENCIA POR PUNTERO \n" ;	
		cout << "\n\n  ANTES DE LA FUNCION     A = " << A ;	
		FUNCION (&A) ;
		cout << "\n\n  DESPUES DE LA FUNCION   A = " << A ;	
							
		A = 44 ;
		cout << "\n\n\n\n\n  TRANSFERENCIA POR REFERENCIA \n" ;	
		cout << "\n\n  ANTES DE LA FUNCION     A = " << A ;	
		FUNC (A) ;
		cout << "\n\n  DESPUES DE LA FUNCION   A = " << A ;						
								
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void FUNCION ( int A )
{
		A = 2 * A ;
}


void FUNCION ( int * P )
{
		*P = 2 * * P;    			//  2 * (*P)
}


void FUNC ( int &B )
{
		B = 2 * B ;
}
