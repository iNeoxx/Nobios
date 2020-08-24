#include "Contenedor.h"
Contenedor obj; 
int main() {
	int opc; 
	do{
	cout << "Ingrese una opcion" << endl; 
	cout << "1)Crear arreglo" << endl;
	cout << "2)Ingresar datos para el arreglo" << endl; 
	cout << "3)Mostrar" << endl;
	cout << "4)Eliminar" << endl; 
	cin>>opc; 	
		
		
	switch(opc){
		
	case 1: 
	obj.crear();	
	break; 
	case 2: 
		obj.ingresar();
		break;
	case 3: 
		obj.mostrar();
		break; 
	case 4: 
		obj.eliminar();
		break; 
		
		
	}
		
	} while(opc != 5);
	
	
	

}

