/* CLASES Y OBJETOS */  

#include <stdio.h>
#include <stdlib.h>

class ALFA {
		private :
			int APRI ;
			void DOBLAR()
			{
					APRI = 2 * APRI ;
			}
		public :
			int BPUB ;
			void CARGAR ( int );
			void MIRAR() ;
};


void ALFA::CARGAR ( int W )
{
		APRI = W ;
		DOBLAR() ;
}

void ALFA::MIRAR ( )
{
		printf (" \n\n   APRI = %d     BPUB = %d" , APRI , BPUB ) ;
}

int main()
{
		ALFA X ;
		
//		X.APRI = 25 ;	ERROR : ALFA::APRI ES PRIVADO
		
		X.BPUB = 765 ;
				
		X.CARGAR(33) ; 		
		
		printf("\n    BPUB = %d " , X.BPUB) ;
		
//		X.DOBLAR();		ERROR : ALFA::DOBLAR() ES PRIVADO
		
		X.MIRAR() ;
						
		printf("\n\n");
		return 0 ;
}
