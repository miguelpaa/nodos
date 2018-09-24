#include <iostream>
#include <conio.h>
using namespace std;
struct nodo{
	int dato;
	struct nodo *siguiente;    
}*inicio, *aux, *actual;//aux para crear nodos, inicio para tener el puntero a la cabeza de la lista , actual para recorrer
void insertarNodo(int);
void mostrarNodos();
int main (){
	
inicio=NULL;

insertarNodo(10);
insertarNodo(20);
insertarNodo(30);
mostrarNodos();




cin.get();
return 0;

}


void insertarNodo( int valor){
	actual=inicio;
	
	
	if (actual==NULL){
	      																																																				  	
		aux=new nodo();
		aux->dato=valor;
		aux->siguiente=NULL;
		inicio=aux;
		}else {
		
		while (actual->siguiente!=NULL)
		{
			actual=actual->siguiente;
		}
		
		
		aux=new nodo();
		aux->dato=valor;
		aux->siguiente=NULL;
		actual->siguiente=aux;
					
}	}
void mostrarNodos()
{
	actual=inicio;
	int i=1;
	while (actual!=NULL){
		 
		cout<<"->Nodo "<<i <<"\t"<< actual->dato<< "\n";
		actual=actual->siguiente;
		i++;
	}
	
	
}
