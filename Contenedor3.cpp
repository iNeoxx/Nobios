#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Contenedor{
private: 
	int vector[30]; 
	int tamanio; 
	int cantidad; 
	int verif; 
public: 
	Contenedor(int pTamanio){
		tamanio = pTamanio; 
		cantidad = 0; 
		for(int i = 0; i <= tamanio; i++){
			vector[i] = 0; 
		}
		
	}
	~Contenedor(){}; 
	void setVerif(int pVerif){
		verif = pVerif; 
	}
	int getVerif(){
		return verif; 
	}
     
	void setCantidad(int pCantidad){
		if(pCantidad <= tamanio){
			cantidad = pCantidad; 
		}
	}
	int getCantidad(){
		return cantidad; 
	}
	void insertar(){
		int opcIntern;   
		cout << "Ingrese una opcion: " << endl; 
		cout << "1.Ingresar valores de uno en uno" << endl; 
		cout << "2.Ingresar todos los valores de una vez" << endl; 
		cin>>opcIntern; 
		switch(opcIntern){ 
		case 1:{ 
			int sCantidad1 = 0; 
			sCantidad1 = getCantidad();
			for(int i = 0; i < tamanio; i++){
				if(vector[i] == 0){
				cout << "Ingrese el valor #" << i + 1 << ": " << endl; 
				sCantidad1 = sCantidad1 + 1; 
				setCantidad(sCantidad1); 
				cin>>vector[i];
				return; 
				}
				
			}
			cout<<"El vector esta lleno..." << endl;
			return; 
		}
		case 2: {
				int sCantidad2 = 0;
			    int sVerif = 0; 
				sCantidad2 = getCantidad();
				for(int i = 0; i < tamanio; i++){
					if(vector[i] == 0){
					cout << "Ingrese el valor #" << i + 1 << ": " << endl; 
					sCantidad2= sCantidad2 + 1; 
					cin>>vector[i];
					setCantidad(sCantidad2); 
					sVerif = 1; 
					setVerif(sVerif); 
					}
				} 

				return; 
				
			}
		default:{ 
			cout<<"Ha digitado un valor incorrecto, saliendo de la funcion..." << endl; 
			break; 
		}
		
		}
		return; 
		
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
		for(int i = 0; i < tamanio; i++){
			s << setw(3) << "[" << i << "]"; 
		}
		s << "\n";
		for(int i = 0; i < tamanio; i ++){
			s << setw(5) << vector[i];   
		}
		s << endl; 
		return s.str(); 
		
	}
	
	short buscar(int pElemBuscar){
		for(int i = 0; i <= tamanio; i++){
			if(vector[i] == pElemBuscar)
				return i; 
		}
		return -1; 
	}
		
	void eliminarPorPosicion(int pPosicion){
		if(pPosicion <= tamanio){
		vector[pPosicion] = 0;
		cout<<"El valor de la posicion ingresada ha sido eliminado!!!" << endl; 
		return; 
		}
		else{
           cout<<"Posicion no valida..." << endl; 
		}
	}
	
	void eliminarPorValor(int pValor){
		for(int i = 0; i <= tamanio; i++){
			if(vector[i] == pValor){
				vector[i] = 0;
				cout<<"Se ha eliminado el valor ingresado!!" << endl; 
				return; 
			}
		}
		cout<<"El valor digitado no se ha podido encontrar..." << endl; 
	}
	
};

Contenedor obj1();
int main() {
	int opc, sTamanio; 
	cout<<"Bienvenida puto..." << endl; 
	system("pause"); 
	cout <<"Ingrese el tamaño del arreglo: " << endl; 
	cin>>sTamanio; 
	Contenedor obj1(sTamanio); 
	do{
	system("pause"); 
	system("cls"); 
	cout<<"Seleccione una opcion: " << endl; 
	cout<<"1.Insertar" << endl; 
	cout<<"2.Mostrar" << endl; 
	cout<<"3.Buscar" << endl; 
	cout<<"4.Eliminar por valor" << endl; 
	cout<<"5.Eliminar por posicion" << endl;
	cout << "6.Salir" << endl;
	cin>>opc;
	switch(opc){
		
	case 1: {
		if(obj1.getVerif() == 1){
			cout<<"El arreglo esta lleno..." << endl; 
			break; 
		}
		else{
		obj1.insertar();
		cout << endl; 
		break; 
		}
	}
	case 2:{ 
		cout << obj1.toString();
		break; 
	}
		
	case 3: {
		int sBusca; 
		cout << obj1.toString() << endl; 
		cout << "\nIngrese el valor a buscar: " << endl; 
		cin>>sBusca; 
		obj1.buscar(sBusca);
		if(obj1.buscar(sBusca) == -1){
			cout << "No se ha encontrado el valor a buscar..." << endl; 
			 
		}
		else{
			cout<<"El valor buscado se encuentra en la posicion " << obj1.buscar(sBusca) << endl;
		}
		break; 
		}
	case 4: {
		int rVerif = 0; 
		int sValor; 
		cout<<obj1.toString() << endl; 
		cout<<"Ingrese el valor que desea eliminar: " << endl; 
		cin>>sValor; 
		obj1.eliminarPorValor(sValor);
		obj1.setVerif(rVerif); 
		break; 
	}
	case 5: {
		int mVerif = 0; 
		int sPosicion; 
		cout<<obj1.toString() << endl; 
		cout<<"Ingrese la posicion del valor que desea eliminar: " << endl;
		cin>>sPosicion; 
		obj1.eliminarPorPosicion(sPosicion); 
		obj1.setVerif(mVerif); 
		break; 
	}
	case 6: 
		break; 
		
	default: {
		cout<<"No seas puto, un valor valido..." << endl; 
		break; 
		
	}
		
	}
	}while(opc != 6); 
	cout<<"Gracias por utilizarme, YAMETE KUDASAAAAAAAAIIIIIIIII" << endl; 

	
	return 0;
}

