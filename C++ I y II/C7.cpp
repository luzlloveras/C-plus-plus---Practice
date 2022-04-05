/* CLASES Y OBJETOS */ 
/* DE CONSTRUCTORES Y DESTRUCTORES */ 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;

class ALFA {
		public :
			ALFA() ;   				//  CONSTRUCTOR
			~ALFA() ;   			//  DESTRUCTOR
			void FUNCION( );
};


ALFA::ALFA ( )
{
		cout << "\n\n   BRAHMA ES EL CONSTRUCTOR\n\n";
		getchar() ;
}

ALFA::~ALFA ( )
{
		cout << "\n\n   SHIVA ES EL DESTRUCTOR\n\n";
		getchar() ;
}

void ALFA::FUNCION ( )
{
		cout << "\n\n  VISHNU ES EL PROTECTOR \n\n";
		getchar();
}

void FUNCION() ;

int main()
{
		ALFA X ;
				
		X.FUNCION() ;
		
		FUNCION() ;		
								
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}

void FUNCION()
{
		cout << "\n\n    DENTRO DE LA FUNCION" ;
		ALFA W ;
		
		W.FUNCION();
		
		cout << "\n\n    POR SALIR DE LA FUNCION" ;
}
