#include <iostream>
#include <stdlib.h>
using namespace std;
class Contenedor{
private: 
	int* ptrVector;
	int tamanio;
	int cantidad; 
public: 
	Contenedor();
	~Contenedor();
	void crear();
	void ingresar();
	void mostrar();
	void eliminar();
};

Contenedor::Contenedor(){
	cantidad = 0; 
	ptrVector = NULL; 
	tamanio = 0; 
}
Contenedor::~Contenedor(){
	
}
void Contenedor::crear(){
	cout << "Ingrese el tamanio para el arreglo: " << endl; 
	cin >> tamanio; 
	ptrVector = new int[tamanio]; 
	for(int i = 0; i < tamanio; i++){
		ptrVector[i] = 0; 
	} 
}
void Contenedor::ingresar(){
	for(int i = 0; i < tamanio; i++){
		cout << "Ingrese el valor N" << i+1 << ": " << endl; 
		cin>> ptrVector[i]; 
		cantidad ++; 
	}
	
}
void Contenedor::mostrar(){
	for(int i = 0; i < tamanio; i++){
		cout << "\nEl valor N" << i << " es: " << ptrVector[i] << endl; ; 
	}
	
}
void Contenedor::eliminar(){
	delete[] ptrVector; 
	ptrVector = NULL;
	cantidad = 0; 
}
