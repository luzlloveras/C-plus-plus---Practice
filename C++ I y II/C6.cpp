/* CLASES Y OBJETOS */ 
/* ENCAPSULANDO UNA PILA */ 
/* USO DEL CONSTRUCTOR */ 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define N 7

using namespace std ;

class PILA {
		private :
			int VEC[N] ;
			int * SP ;
		public :
			PILA() ;   			//  CONSTRUCTOR
			void PUSH ( int );
			int PULL() ;
};


void PILA::PUSH ( int W )
{
		if ( SP == VEC+N ) {
				cout << "\n\n   PILA LLENA\n\n";
				return ;
		}
		*SP = W ;
		SP++ ;
}


int PILA::PULL ( )
{
		if ( SP == VEC ) {
				cout << "\n\n   PILA VACIA\n\n";
				return 0 ;
		}
		SP-- ;
		return *SP ;    
}


PILA::PILA ( )
{
		cout << "\n\n  CONSTRUCTOR EN ACCION \n\n";
		getchar();
		SP = VEC ;
}


int main()
{
		int VALOR ;
		PILA P ;
				
		for ( int I = 0 ; I < N+3 ; I++ ) {
				cout << "\n\n   VALOR  =  ";
				cin >> VALOR ;
				P.PUSH(VALOR) ;
		}
		
		
		cout << "\n\n\n  VALORES DE LA PILA\n\n";
		for ( int I = 0 ; I < N+3 ; I++ ) 
				cout << "\n\n   " << P.PULL() ;
								
		printf("\n\n");
		return 0 ;
}
