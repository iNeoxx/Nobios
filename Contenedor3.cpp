#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Contenedor{
private: 
	int vector[30]; 
	int tamanio; 
	int cantidad; 
public: 
	Contenedor();
	Contenedor(int pTamanio){
		tamanio = pTamanio; 
		cantidad = 0; 
		for(int i = 0; i <= tamanio; i++){
			vector[i] = 0; 
		}
		
	}
	~Contenedor(); 
     
	void setCantidad(int pCantidad){
		if(pCantidad <= tamanio){
			cantidad = pCantidad; 
		}
	}
	void insertar(){
		int opcIntern; 
		cout << "Ingrese una opcion: " << endl; 
		cout << "1.Ingresar valores de uno en uno" << endl; 
		cout << "2.Ingresar todos los valores de una vez" << endl; 
		cin>>opcIntern; 
		switch(opcIntern){
			
		case 1: 
			for(int i = 0; i <= tamanio; i++){
				if(vector[i] == 0){
				cout << "Ingrese el valor #" << i + 1 << ": " << endl; 
				cin>>vector[i];
				break; 
				}
				
			}
			
		case 2: 
				for(int i = 0; i <= tamanio; i++){
					if(vector[i] == 0){
					cout << "Ingrese el valor #" << i + 1 << ": " << endl; 
					cin>>vector[i];
					}
				}
				break; 
		default: 
			cout<<"Ha digitado un valor incorrecto, saliendo de la funcion..." << endl; 
			break; 
		}
		
		
	}
	
	bool validar(){
		for(int i = 0; i <= tamanio; i++){
			if(vector[i] == 0)
				return true; 
			else
				return false; 
		}
	}
	
	string toString(){
		stringstream s; 
		s << "Valores del arreglo: " << endl; 
		for(int i = 0; i <= tamanio; i++){
			s << setw(3) << "[" << i << "]"; 
		}
		s << "\n";
		setw(2); 
		for(int i = 0; i <= tamanio; i ++){
			s << setw(5) << vector[i]; 
		}
		return s.str(); 
		
	}
	
	short buscar(int pElemBuscar){
		for(int i = 0; i <= tamanio; i++){
			if(vector[i] == pElemBuscar)
				return i; 
			else 
				return -1; 
		}
	}
		
	void eliminarPorPosicion(int pPosicion){
		if(pPosicion <= tamanio){
		vector[pPosicion] = 0;
		return; 
		}
		else{
           cout<<"Posicion no valida..." << endl; 
			system("pause"); 
		}
	}
	
	void eliminarPorValor(int pValor){
		for(int i = 0; i <= tamanio; i++){
			if(vector[i] == pValor){
				vector[i] = 0; 
			}
		}
	}
	
};


int main() {
	int opc; 
	cout<<"Bienvenida puto..." << endl; 
	system("pause"); 
	cout<<"Seleccione una opcion: " << endl; 
	cout<<"1.Inseertar" << endl; 
	cout<<"2.Mostrar" << endl; 
	cout<<"3.Buscar" << endl; 
	cout<<"4.Eliminar por valor" << endl; 
	cout<<"5.Eliminar por posicion" << endl;
	cout << "6.Salir" << endl; 
	
	return 0;
}

