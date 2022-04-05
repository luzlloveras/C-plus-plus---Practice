/* CLASES Y OBJETOS */ 
/* CONSTRUCTORES PARAMETRIZADOS */ 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;

class ALFA {
		private :
			int NUM ;
		public :
			ALFA(int) ;   				//  CONSTRUCTOR
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
		int VALOR ;
		cout << "\n\n\n\n  VALOR   =   ";
		cin >> VALOR ;
		
		ALFA X(VALOR) ;
				
		X.MIRAR() ;
								
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


