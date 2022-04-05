/* MIEMBROS ESTATICOS DE UNA CLASE */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class ALFA {
		public :
				int A ;
				static int B ;
				ALFA() ;
};

int ALFA::B ;

ALFA::ALFA()
{
		B = 30 ;
}



int main()
{
		ALFA X ;
		
		cout << "\n\n  X     A = " << X.A << "     B = " << X.B ;
		X.A = 67 ;      X.B = 77 ;
		cout << "\n\n  X     A = " << X.A << "     B = " << X.B ;
		getchar();
				
		cout << "\n\n\n\n     INSTANCIAMOS Y " ;
		ALFA Y ;
		
		cout << "\n\n  X     A = " << X.A << "     B = " << X.B ;
		cout << "\n\n  Y     A = " << Y.A << "     B = " << Y.B ;
		getchar();
		
		cout << "\n\n\n\n     CARGAMOS Y CON NUEVOS VALORES " ;
		Y.A = 6767 ;      Y.B = 9977 ;
		cout << "\n\n  X     A = " << X.A << "     B = " << X.B ;
		cout << "\n\n  Y     A = " << Y.A << "     B = " << Y.B ;
		getchar() ;
				
		printf("\n\n X.A %10p   X.B %10p     Y.A %10p   Y.B %10p" ,
		&X.A , &X.B , &Y.A , &Y.B);
										
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}




