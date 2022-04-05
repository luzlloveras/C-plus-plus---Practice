/* LISTAS SIMPLEMENTE ENLAZADAS */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std ;

class NODO {
		public :
			char NOM[20] ;
			NODO * SIG ;
			NODO ( char * );
			~NODO() ;
};


NODO::NODO(char * S)
{
		strcpy ( NOM , S );
}

NODO::~NODO()
{
		cout << "\n\n   MATANDO A .... " << NOM << "\n";
		getchar() ;
}


class LISTA {
		private :
			NODO * INICIO ;
			void PONER_P(NODO *);
			void PONER_F(NODO *);
			void INSERT(NODO *);
		public :
			LISTA() ;
			~LISTA() ;
			void AGREGAR_P(char *);
			void AGREGAR_F(char *);
			void INSERTAR(char *);
			void MIRAR() ;
};


LISTA::LISTA()
{
		INICIO = NULL ;
}

LISTA::~LISTA()
{
		cout << "\n\n   DESTRUYENDO TODOS LOS NODOS \n";
		cout << "\n\n   ESTA ES PARA USTEDES !!! .... \n";
		getchar() ;
}


void LISTA::AGREGAR_P(char * S)
{
		NODO * P ;
		P = new NODO(S) ;
	
		PONER_P(P) ;
}

void LISTA::PONER_P(NODO * PN)
{
		PN->SIG = INICIO ;
		INICIO = PN ;
}

void LISTA::AGREGAR_F(char * S)
{
		NODO * P ;
		P = new NODO(S) ;
	
		PONER_F(P) ;
}

void LISTA::PONER_F(NODO * PN)
{
		NODO * P ;
		
		P = INICIO ;		
		PN->SIG = NULL ;
		
		if ( ! INICIO ) {
				/*  LISTA VACIA  */
				INICIO = PN ;
				return ;
		}
		/*  LISTA NO VACIA  */
		while ( P->SIG )
				P = P->SIG ; 	// LLEVO P HASTA EL ULTIMO NODO
		P->SIG = PN ;		
}

void LISTA::INSERTAR(char * S)
{
		NODO * P ;
		P = new NODO(S) ;
	
		INSERT(P) ;
}

void LISTA::INSERT(NODO * PN)
{
		NODO * P , * ANT ;
		
		P = INICIO ;
		ANT = NULL ;
		
		if ( ! INICIO ) {
				/*  LISTA VACIA  */
				PN->SIG = NULL ;
				INICIO = PN ;
				return ;
		}	
		/*   LISTA NO VACIA   */
		while ( P ) {
				if ( strcmp (P->NOM , PN->NOM) < 0 ) {
						/*  BARRIDO  */
						ANT = P ;
						P = P->SIG ;					
				}
				else {
						/*  EUREKA !!! */
						if ( ANT ) {
								/*  NODO INTERMEDIO  */
								PN->SIG = P ;
								ANT->SIG = PN ;
								return ;							
						}
						/*  PRIMER NODO */
						PN->SIG = INICIO ;
						INICIO = PN ;
						return ;				
				} /*  else  */				
		}  /* while  */
		/*  NUEVO ULTIMO NODO  */
		PN->SIG = NULL ;
		ANT->SIG = PN ;			
}


void LISTA::MIRAR()
{
		NODO * P ;
		cout << "\n\n\n\t CONTENIDO DE LA LISTA \n\n";
		
		P = INICIO ;
		while (P) {
				cout << "\n\n\t " << P->NOM ;
				P = P->SIG ;			
		}
		getchar();		
}

int main()
{
		LISTA L ;
		char BUF[20] ;
		
		cout << "\n\n   NOMBRE   :   ";
		cin >> BUF ;
		while ( strcmp(BUF,"FIN") ) {
				L.INSERTAR(BUF) ;
			
				cout << "\n\n   NOMBRE   :   ";
				cin >> BUF ;
		}
		
		L.MIRAR() ;
						
								
		printf("\n\n\n\n FIN DEL PROGRAMA\n\n");
		return 0 ;
}



