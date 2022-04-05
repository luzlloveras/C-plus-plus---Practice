/* MIEMBROS ESTATICOS DE UNA CLASE */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class ALFA {
		private :
				int ID ;
				static int NUM ;
		public :
				ALFA() ;
				~ALFA() ;
				void SALUDAR();	
};

int ALFA::NUM ;

ALFA::ALFA()
{
		ID = ++NUM ;
		cout << "\n\n\t      NACE EL OBJETO No. ... " << ID ;
		getchar();
}

ALFA::~ALFA()
{
		cout << "\n\n\t      MUERE EL OBJETO No. ... " << ID ;
		getchar();
}

void ALFA::SALUDAR()
{
		cout << "\n\n\t      HOLA, YO SOY No. ... " << ID ;
		getchar();
}

void FUNCION();

int main()
{
		int I ;
		cout << "\n\n  INSTANCIA DE OBJETO LOCAL" ;
		ALFA X ;
		ALFA * P ;
		cout << "\n\n  INSTANCIA DE VECTOR LOCAL DE 3" ;
		ALFA VEC[3] ;
		
		cout << "\n\n  INSTANCIA DE VECTOR DINAMICO DE 5" ;
		P = new ALFA[5] ;					
		
		cout << "\n\n  VAMOS A LA FUNCION" ;
		FUNCION() ;
		cout << "\n\n  DE NUEVO EN EL MAIN" ;
		
		cout << "\n\n  SALUDA EL OBJETO LOCAL" ;
		X.SALUDAR();
		
		cout << "\n\n  SALUDA EL VECTOR DINAMICO" ;
		for ( I = 0 ; I < 5 ; I++ )
			(P+I)->SALUDAR();
			
		cout << "\n\n  MATANDO AL VECTOR DINAMICO" ;	
		delete[] P ;	
			
		cout << "\n\n  SALUDA EL VECTOR LOCAL" ;
		for ( I = 0 ; I < 3 ; I++ )
			VEC[I].SALUDAR();
										
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void FUNCION()
{
		cout << "\n\n  ESTAMOS EN LA FUNCION" ;
		ALFA Y ;
		Y.SALUDAR();
		cout << "\n\n  POR SALIR DE LA FUNCION" ;
}

