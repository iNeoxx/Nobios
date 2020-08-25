#include "Contenedor.h"


int main(){
	int opc; 
	int sTam; 
	Persona pObj1; 
	string sCed; 
	string sName;
	cout << "Ingrese la extenion del arreglo: " << endl; 
	cin>>sTam; 
	Contenedor cObj1(sTam); 
	do{
		system("cls");
		cout << "\t MENU" << endl; 
		cout << "1)Ingresar datos" << endl; 
		cout << "2)Mostrar datos" << endl; 
		cout << "3)Salir" << endl; 
		cin>>opc; 
		switch(opc){
		case 1: 
			cout << "Ingrese el nombre: " << endl; 
			cin>>sName; 
			pObj1.setNombre(sName); 
			cout << "Ingrese la cedula: " << endl; 
			cin>>sCed; 
			pObj1.setCedula(sCed); 
			cObj1.ingresar(pObj1);
			break; 
		
	    case 2: 
			cObj1.mostrar();
			break; 
     	case 3: 
			cObj1.eliminar();
		break;
		default: 
			cout << "Ingrese una opcion valida por favor" << endl;
			break;
		}	
		system("pause"); 
	} while(opc != 3);
	
	
	return 0; 
}
