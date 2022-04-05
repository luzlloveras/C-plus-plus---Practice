/* OPERADOR & */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

int main()
{
		int A ;
		int & B = A ;
		
		A = 25 ;
		printf ("\n\n\n  A = %d      B = %d \n" , A , B);		
			
		B = 876 ;
		printf ("\n\n\n  A = %d      B = %d \n" , A , B);				
		
		printf ("\n\n\n  &A = %p      &B = %p \n" , &A , &B);			
		
								
		printf("\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}


