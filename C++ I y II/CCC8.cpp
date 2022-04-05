/* FUNCIONES AMIGAS */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class BETA ;

class ALFA {
		private :
				int A ;
		public :
				ALFA() ;
				void friend MIRAR (ALFA &);
				void friend FUNCION ( ALFA & , BETA & );
};


ALFA::ALFA()
{
		A = 25 ;
}


class BETA {
		private :
				float B ;
		public :
				BETA() ;
				void friend MIRAR (BETA &);
				void friend FUNCION ( ALFA & , BETA & );
};


BETA::BETA()
{
		B = 3.25 ;
}

void MIRAR(ALFA &);
void MIRAR(BETA &);
void FUNCION ( ALFA & , BETA & );

int main()
{
		ALFA X ;
		BETA Y ;
		
		MIRAR(X) ;
		MIRAR(Y) ;
		
		FUNCION ( X , Y );
		
		MIRAR(X) ;
		MIRAR(Y) ;
										
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void MIRAR(ALFA & W)
{
		cout << "\n\n  CAMPO A   =   " << W.A ;
		getchar();
}


void MIRAR(BETA & W)
{
		cout << "\n\n  CAMPO B   =   " << W.B ;
		getchar();
}


void FUNCION ( ALFA & W , BETA & Z )
{
		W.A = 2 * W.A ;
		Z.B = Z.B * W.A ;	
}
