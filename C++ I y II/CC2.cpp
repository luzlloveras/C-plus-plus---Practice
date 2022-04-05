/* CLASES Y OBJETOS */ 
/* CONSTRUCTORES PARAMETRIZADOS CON DEFAULT  */ 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;

class ALFA {
		private :
			int NUM ;
		public :
			ALFA ( int = 4 ) ;   				//  CONSTRUCTOR
			void MIRAR( );
};


ALFA::ALFA ( int W )
{
		NUM = W ;
}


void ALFA::MIRAR ( )
{
		int I ;
		for ( I = 0 ; I < NUM ; I++ )
			cout << "\n\t  " << I+1 << "     PEPE\n";
		getchar();
}


int main()
{
		/*  USUARIO DISCONFORME  */
		int VALOR ;
		cout << "\n\n\n\n  VALOR   =   ";
		cin >> VALOR ;
		getchar();
		
		ALFA X(VALOR) ;
				
		X.MIRAR() ;
			
		/*   USUARIO  INDECISO   */
		ALFA Y ;
		
		cout << "\n\n\n   USUARIO INDECISO\n\n";		
		Y.MIRAR() ;	
								
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


