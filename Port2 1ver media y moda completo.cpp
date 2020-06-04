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
void moda(){
int numero = 0, valor = 0, rep=0;
for(int i=0; i < max; i++){
numero = edad[i];
if(rep <= verifica(numero)){
rep = verifica(numero);
valor = edad[i];

}

}
mostrarModa(rep, valor);
}
void mostrarModa(int r, int v){
if(r < 2){
	cout<<"no hay ninguna moda :("<<endl;
	
}
else{
	cout<<endl;
	cout<<"la moda en la edad es "<<v<<" se repite "<<r<<endl;
}
} 
int verifica(int nu){
int x = 0;
for(int i=0; i < max; i++){
if(nu == edad[i]){
x++;
}
}
return x;
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
	int sMax, opc; 
	cout<<"Bienvenido al administrador de valores estadisticos de la comunidad"<<endl; 
	system("pause");
	cout<<"Ingrese la cantidad de personas con las que va a trabajar (Maximo mil personas)"<<endl; 
	cin>>sMax; 
	obj.setMax(sMax);
	obj.asignar();
	
	do{
		system ("cls"); 
		cout<<"Menu"<<endl; 
		cout<<"1.Mostrar edades"<<endl;
		cout<<"2.Calcular media"<<endl; 
		cout<<"3.Calcular moda"<<endl; 
		cout<<"4.Calcular mediana"<<endl; 
		cout<<"5.Calcular desviacion respecto a la media"<<endl; 
		cout<<"6.Calcular desviacion media"<<endl; 
		cout<<"7.Calcular varianza"<<endl; 
		cout<<"8.Calcular desviacion estandar"<<endl; 
		cout<<"9.Salir"<<endl; 
		cin>>opc; 
		switch (opc){
			
		case 1: 
			
			obj.mostrar();
			break; 
				
		case 2: 	
			
			cout<<"La media es: "<<obj.calcularMedia()<<endl; 
			break; 
			
		case 3: 
			
			obj.moda();
			break; 
			
		}
		system ("pause"); 
		
	} while(opc != 9);
	

	
	return 0;
}
