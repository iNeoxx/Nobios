#ifndef CONTENEDOR_H
#define CONTENEDOR_H
#include"Persona.h"
#endif
class Contenedor{
private: 
	Persona* ptrVector; 
	int max; 
	int cantidad;
public: 
		Contenedor(int);
		~Contenedor();
		void ingresar(Persona);
		void mostrar();
		void eliminar();
	
	
	
};
Contenedor::Contenedor(int pMax){
	max = pMax; 
	cantidad = 0; 
	ptrVector = new Persona[max];
}
Contenedor::~Contenedor(){
	
}
void Contenedor::ingresar(Persona pObj){
	if(cantidad < max){
		for(int i = 0; i < max; i++){
			ptrVector[i] = pObj; 
			cantidad ++; 
			break; 
		}
	}
	else
	   cout << "No se pueden ingresar mas objetos" << endl; 
}
void Contenedor::mostrar(){
	for(int i = 0; i < cantidad; i++){
		cout << "Elemento N" << i << endl; 
		cout << ptrVector[i]-> Persona::toString(); 
	}
}
void Contenedor::eliminar(){
	ptrVector = NULL;
}
