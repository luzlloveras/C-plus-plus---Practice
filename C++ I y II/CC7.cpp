/* SOBRECARGA DE CONSTRUCTORES */ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class ALFA {
		private :
			int NUM ;
			char NOM[20];
		public :
			ALFA ( int ) ;   				//  CONSTRUCTOR
			ALFA ( ) ;   					//  CONSTRUCTOR
			ALFA ( int , char * ) ;  		//  CONSTRUCTOR
			void MIRAR( );
};


ALFA::ALFA ( int W )
{
		NUM = W ;
		strcpy(NOM,"PEPE");
}

ALFA::ALFA ( )
{
		NUM = 4 ;
		strcpy(NOM,"PEPE");
}


ALFA::ALFA ( int W , char * S )
{
		NUM = W ;
		strcpy(NOM,S);
}


void ALFA::MIRAR ( )
{
		int I ;
		for ( I = 0 ; I < NUM ; I++ )
			cout << "\n\t  " << I+1 << "     " << NOM << "\n";
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
					
		/*  USUARIO MUY DISCONFORME  */
		cout << "\n\n\n\n  VALOR   =   ";
		cin >> VALOR ;
		getchar();
		
		ALFA W(VALOR,"LOLA") ;
				
		W.MIRAR() ;			
								
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


