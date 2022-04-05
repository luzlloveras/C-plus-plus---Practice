/* MODIFICADOR STATIC */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FUNCION ();

#define N 8

int main()
{
		int I ;
		
		for ( I = 0 ; I < N ; I++)
				FUNCION() ;
										
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


void FUNCION ()
{
		int A = 40 ;
		static int B = 50 ;
		
		printf ("\n\n\t\t  A = %d  %p     B = %d  %p" , A , &A , B , &B );
			
		A++ ;
		B++ ;		
}

