#include <iostream>
#include<sstream>
#include<time.h>
#include<math.h>
using namespace std;

class Coleccion{
	
private:
	int edad[1000];
	int max = 5;
	int total = 0;
	
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


int modaR(){
	int numero = 0, valor = 0, rep=0;
	for(int i=0; i < max; i++){
		numero = edad[i];
		if(rep < verifica(numero)){
			rep = verifica(numero);
			valor = edad[i];
			
		}
	}
	return rep; 
}


int modaV(){
	int numero = 0, valor = 0, rep=0;
	for(int i=0; i < max; i++){
		numero = edad[i];
		if(rep < verifica(numero)){
			rep = verifica(numero);
			valor = edad[i];
			
		}
	}
	return valor; 
	
	
	
}


int mostrarModa(){
	
	if(modaR() < 2){
		return -1;
	}
	
	else {	
		cout<<endl;
		return modaV();
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
		


void ordSeleccion ()
{
	int indiceMenor, i, j;
	/* ordenar a[0]..a[n-2] y a[n-1] en cada pasada */
	for (i = 0; i < max - 1; i++)
	{
		/* comienzo de la exploraci?n en ?ndice i */
		indiceMenor = i;
		/* j explora la sublista a[i+1]..a[n-1] */
		for (j = i+1; j < max; j++)
			if (edad[j] < edad[indiceMenor])
				indiceMenor = j;
		/* situa el elemento mas peque?o en a[i] */
		if (i != indiceMenor)
		{
			int aux = edad[i];
			edad[i] = edad[indiceMenor];
			edad[indiceMenor] = aux ;
		}
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
float calcularMediana(){
	int pos = max / 2;
	float m = 0.0;
	if(max % 2 == 0){
		m = (float)(edad[pos-1]+edad[pos]) / 2.0;
	}
	else {
		m = edad[pos -0];
	}
	return m;
}
			
			
			


void calcularDesvRMedia(){//indica lo lejos que esta un valor de la media
	float suma2 = 0; 
	for(int i = 0; i < max; i++){
		cout<<"La desviacion con respecto a la media de "<<edad[i]<<" es: "<<fabs(edad[i] - calcularMedia())<<endl;  
		suma2 = suma2 + fabs(edad[i] - calcularMedia());	
		
		
	}
	
}


float sumaDesvrmedia(){
	float suma3 = 0;
	for(int i = 0; i < max; i++){
		suma3 = suma3 + fabs(edad[i] - calcularMedia());	
	}
	return suma3; 
}
					


float desvMedia(){
	float Ddesvmedia; 
	Ddesvmedia = sumaDesvrmedia() / max; 
	return Ddesvmedia; 
	
}


int calcularVarianza(){	//media aritmetica del cuadrado de las desvrmedia
float vSuma;
float varianza; 
for(int i = 0; i < max; i++){
	vSuma = vSuma + (fabs(edad[i] - calcularMedia())) * (fabs(edad[i] - calcularMedia()));	
	
	
}
varianza = vSuma / max; 
return varianza; 	 
}


int calcularDesvEstandar(){//media de dispersion mas comun
	float desvEstandar; 
	desvEstandar = sqrt(calcularVarianza());
	return desvEstandar; 

}
		

string toString(){
	stringstream s; 
	for(int i = 0; i < max; i++){
		s<<"La edad "<<i+1<<" es: "<< edad[i]<<endl; 	
	}
	return s.str();
}

int toStringSuma(){
	int suma = 0; 
	
	for(int i = 0; i <= max; i++) 
		suma = suma + edad[i]; 
	
	return suma;
	
}

string toStringInforme(){
	stringstream s; 
	modaR();
	modaV();
	mostrarModa();

	if(mostrarModa() == -1)
		s<<"No hay moda..." << endl;
	else 
		cout<<"La moda es: " << mostrarModa() << " y se repite " << modaR() << " veces" << endl;
	ordSeleccion();
	s << "La mediana es: " << calcularMediana() << endl; 
	calcularDesvRMedia();
	s<<"La desviacion media corresponde a: " << desvMedia() << endl; 
	s<<"La varianza corresponde a: " << calcularVarianza() << endl; 
	s << "La desviacion estandar corresponde a: " << calcularDesvEstandar() << endl; 
	return s.str();
}



};








Coleccion obj; 
Coleccion obj2; 


int main() {
	int opc; 
	cout<<"Bienvenido al administrador de valores estadisticos de la comunidad"<<endl; 
	obj.asignar();
	obj.ordSeleccion();
	system("pause");
	obj2.asignar();
	obj2.ordSeleccion();   
	
	
	
	
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
		cout<<"9.Mostrar informe de las dos comunidades"<<endl;
		cout<<"10.Salir"<<endl; 
		cin>>opc; 
		switch (opc){
			
		case 1: 
			
			cout<<obj.toString();
			break; 
			
		case 2: 	
			
			cout<<"La media es: "<<obj.calcularMedia()<<endl; 
			break; 
			
		case 3: 
			
			obj.modaR();
			obj.modaV();
			obj.mostrarModa();
			if(obj.mostrarModa() == -1)
				cout<<"No hay moda..." << endl; 
			else 
			cout<<"La moda es: " << obj.mostrarModa() << " y se repite " << obj.modaR() << " veces" << endl; 
			break; 
			
		case 4: 
			obj.ordSeleccion();
			cout<<"La mediana es: "<<obj.calcularMediana()<<endl; 
			break; 
			
		case 5: 
			obj.calcularDesvRMedia();
			break; 
			
		case 6: 
			cout<<"La desviacion media corresponde a: " << obj.desvMedia() << endl; 
			break; 
			
		case 7: 
			cout<<"La varianza corresponde a: " << obj.calcularVarianza() << endl; 
			break; 
		
		case 8: 
			cout<<"La desviacion estandar corresponde a: " << obj.calcularDesvEstandar()<<endl; 
			break; 
			
		case 9: 
			cout<<"Datos de la primera communidad: " << endl; 
			cout<< obj.toString()<<endl;
			cout<<"La suma de edad de la primera comunidad es: "<< obj.toStringSuma()<<endl;
			cout << obj.toStringInforme() << endl; 
			cout<<endl; 
			cout<<"........................................................."<<endl; 
			cout<<endl; 
			cout<<"Datos de la segunda comunidad: " << endl;
			cout<< obj2.toString()<<endl; 
			cout<<"La suma de edad de la segunda comunidad es: "<<obj2.toStringSuma()<<endl;
			cout<<obj2.toStringInforme()<<endl;
			
			cout<<"La suma de la edad de la primera y segunda comunidad es: "<<obj.toStringSuma() + obj2.toStringSuma()<<endl;
			
			
			
		}
		system ("pause"); 
		
	} while(opc != 10);
	
	
	
	return 0;
}
