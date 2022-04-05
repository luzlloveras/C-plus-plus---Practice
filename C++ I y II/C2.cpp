/* NUEVOS FLUJOS DE ENTRADA Y SALIDA */  

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std ;

int main()
{
		long A ;
		cout << "\n\n  ENTERO LARGO  =  ";
		cin >> A ;
		
		short B ;
		cout << "\n\n  ENTERO CORTO  =  ";
		cin >> B ;
		
		char C ;
		cout << "\n\n  CARACTER      =  ";
		cin >> C ;
		
		float F ;
		cout << "\n\n  FLOTANTE      =  ";
		cin >> F ;
		
		char STR[20] ;
		cout << "\n\n  FRASE         =  ";
		cin >> STR ;
		
		cout << "\n\n\n\n  VALORES ORIGINALES \n";
		cout << "\n\n  ENTERO LARGO     =  " << A ;
		cout << "\n\n  ENTERO CORTO     =  " << B ;
		cout << "\n\n  CARACTER         =  " << C ;
		cout << "\n\n  FLOTANTE         =  " << F ;
		cout << "\n\n  FRASE INGRESADA  =  " << STR ;
		getchar();
		
		cout << "\n\n\n\n  VALORES EN HEXADECIMAL \n" << hex ;
		cout << "\n\n  ENTERO LARGO     =  " << A ;
		cout << "\n\n  ENTERO CORTO     =  " << B ;
		cout << "\n\n  CARACTER         =  " << C ;
		cout << "\n\n  FLOTANTE         =  " << F ;
		cout << "\n\n  FRASE INGRESADA  =  " << STR ;
		getchar();
		
		cout << "\n\n\n\n  VALORES EN OCTAL \n" << oct ;
		cout << "\n\n  ENTERO LARGO     =  " << A ;
		cout << "\n\n  ENTERO CORTO     =  " << B ;
		cout << "\n\n  CARACTER         =  " << C ;
		cout << "\n\n  FLOTANTE         =  " << F ;
		cout << "\n\n  FRASE INGRESADA  =  " << STR ;
		getchar();		
				
		cout << "\n\n\n\n  VALORES EN DECIMAL \n" << dec ;
		cout << "\n\n  ENTERO LARGO     =  " << A ;
		cout << "\n\n  ENTERO CORTO     =  " << B ;
		cout << "\n\n  CARACTER         =  " << C ;
		cout << "\n\n  FLOTANTE         =  " << F ;
		cout << "\n\n  FRASE INGRESADA  =  " << STR ;
		getchar();
						
		printf("\n\n");
		return 0 ;
}
