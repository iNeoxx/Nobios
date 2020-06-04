#include <iostream>
#include<sstream>
#include<time.h>
using namespace std;

class Coleccion{
	
private:
	int edad[1000];
	int max;
	
public:
	Coleccion(){
		
	}
	
	~Coleccion(){
		
	}
	void setMax(int pMax){
		max = pMax; 
		
	}
	
	void asignar() {
	srand(time(NULL));
	//inicio + numero aleatorio hasta X
	for (int i = 0; i < max; i++)
	{
		edad[i] = 1 + rand() % 120;
	}
    
	}
	
	float calcularMedia(){
		//suma de los datos entre numero de datos 
		float media = 0, suma = 0;  
		for(int i = 0; i < max; i++){
			suma = suma + edad[i]; 
		}
		media = suma / max;
		
		return media; 
	}
	
	int calcularModa(){
		//dato o datos que mas se repiten }
		 float moda; 
		 return moda; 
	}
	
	int calcularMediana(){
		//valor central de un conjunto de datos
		float mediana; 
		return mediana; 
	}
	
	
	int calcularDesvRMedia(){
		//indica lo lejos que esta un valor de la media
		float desvrmedia; 
		return desvrmedia;
	}
	
	int calcularDesvMedia(){
		//promedio de las desviasiones (desviasiones entre n)
		float desvmedia; 
		return desvmedia; 
	}
	
	int calcularVarianza(){
		//media aritmetica del cuadrado de las desvrmedia
		float varianza; 
		return varianza; 
	}
	
	int calcularDesvEstandar(){
		//media de dispersion mas comun
		float desvestandar;
		return desvestandar; 
	}
	
		void mostrar(){
			for(int i = 0; i < max; i++){
				cout<<"N "<<i+1<<": "<< edad[i]<<endl; 	
			}
			
		}
	
	
	
	
	
};








Coleccion obj; 
Coleccion obj2; 


int main() {
	int sMax; 
	cout<<"Ingrese la cantidad de personas con las que va a trabajar"<<endl; 
	cin>>sMax; 
	obj.setMax(sMax);
	obj.asignar();
	obj.calcularMedia();
	cout<<"La media es: "<<obj.calcularMedia()<<endl; 
	obj.mostrar();
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

