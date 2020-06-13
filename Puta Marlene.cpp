#include <iostream>
#include<sstream>
#include<time.h>
#include<math.h>
using namespace std;

class Coleccion{
	
private:
	int edad[2000];
	int max = 1000; //Esta variable corresponde a la longitud maxima del arreglo 
	
public:
	Coleccion(){
		
	}
	
	~Coleccion(){
		
	}		
		

void setMax(int pMax){
	max = pMax; 
	
	
}
void asignar() { //Esta funcion asigna las edades de los arreglos (el valor de las edades no pasa el 120)
	srand(time(NULL));
	for (int i = 0; i < max; i++)
	{
		edad[i] = 1 + rand() % 120;
	}
	
}

		
		
float calcularMedia(){ //Esta funcion calcula la media, la cual corresponde a la suma de los elementos del arreglo dividida entre el maximo 
	//suma de los datos entre numero de datos 
	float media = 0, suma = 0;  
	for(int i = 0; i < max; i++){
		suma = suma + edad[i]; 
	}
	media = suma / max;
	
	return media; 
}
			
			
int modaR(){ //Esta funcion calcula las repeticiones de un numero en caso de que alguno se repita
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
				
				
int modaV(){ //Esta funcion retorna el valor que mas se repite: la moda
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

	int verifica(int nu){ //Esta funcion verifica la cantidad de repeticiones, se utiliza en las funciones anteriores 
	int x = 0;
	for(int i=0; i < max; i++){
		if(nu == edad[i]){
			x++;
		}
	}
	return x;
}					
					
int mostrarModa(){ //Esta funcion toma en cuenta las anteriores para determinar si existe o no una moda 
	
	if(modaR() < 2){
		return -1;
	}
	
	else {	
		cout<<endl;
		return modaV();
	}
} 
	
							
void ordSeleccion () //Esta funcion ordena los elementos de los arreglos 
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
								
float calcularMediana(){ //Como su nombre lo indica, esta funcion calcula la mediana (con el arreglo ordenado)
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
	
								
								
								
								
void calcularDesvRMedia(){//Esta funcion indica lo lejos que esta cada valor de la media
	float suma2 = 0; 
	for(int i = 0; i < max; i++){
		cout<<"La desviacion con respecto a la media de "<<edad[i]<<" es: "<<fabs(edad[i] - calcularMedia())<<endl;  
		suma2 = suma2 + fabs(edad[i] - calcularMedia());	
		
		
	}
	
}
	
									
float sumaDesvrmedia(){ //Esta funcion realiza la suma de todos los valores obtenidos de la funcion anterior
	float suma3 = 0;
	for(int i = 0; i < max; i++){
		suma3 = suma3 + fabs(edad[i] - calcularMedia());	
	}
	return suma3; 
}
										
										
										
float desvMedia(){ //Esta funcion calcula la desviacion media 
	float Ddesvmedia; 
	Ddesvmedia = sumaDesvrmedia() / max; 
	return Ddesvmedia; 
	
}
											
											

int calcularVarianza(){	//Esta funcion media aritmetica del cuadrado de las desviacion con respecto a la media: Varianza
	float vSuma;
	float varianza; 
	for(int i = 0; i < max; i++){
		vSuma = vSuma + (fabs(edad[i] - calcularMedia())) * (fabs(edad[i] - calcularMedia()));	
		
		
	}
	varianza = vSuma / max; 
	return varianza; 	 
}
												
												
int calcularDesvEstandar(){//Esta funcion calcula la desviacion estandar 
	float desvEstandar; 
	desvEstandar = sqrt(calcularVarianza());
	return desvEstandar; 
	
}
													
													
string toString(){ //Esta funcion mostraria las edades en caso de ser necesario 
	stringstream s; 
	for(int i = 0; i < max; i++){
		s<<"La edad "<<i+1<<" es: "<< edad[i]<<endl; 	
	}
	return s.str();
}
														
void ponerObj1(Coleccion ob){ //Esta funcion suma la edad de las comunidades para calcular la tercera: obj3[i] = obj1[i] + obj2[i]
	
	for(int i=0; i < max; i++){
		edad[i] = ob.edad[i];
	}

	
}
void ponerObj2(Coleccion ob2){ //Esta funcion suma la edad de las comunidades para calcular la tercera: obj3[i] = obj1[i] + obj2[i]
		int j = 0; 
		for(int i = 1000; i < max; i++){ 
			edad[i] = ob2.edad[j];
			j++; 
		}
		
		
	}
	string toStringpeque(){ //Mensaje que indica que las edades se han generado 
		stringstream s; 
		s<<"\nSe han generado las edades exitosamente!!" << endl; 
		return s.str();
	}
															
string toStringInforme(){ //Metodo que muestra las medidas de posicion de los arreglos correspondientes 
	stringstream s; 
	modaR();
	modaV();
	mostrarModa();
	s << "La media es: " << calcularMedia() << endl;
	if(mostrarModa() == -1)
		s<<"No hay moda..." << endl;
	else 
		cout<<"La moda es: " << mostrarModa() << " y se repite " << modaR() << " veces" << endl;
	ordSeleccion();
	s << "La mediana es: " << calcularMediana() << endl; 
	s<<"La desviacion media corresponde a: " << desvMedia() << endl; 
	s<<"La varianza corresponde a: " << calcularVarianza() << endl; 
	s << "La desviacion estandar corresponde a: " << calcularDesvEstandar() << endl; 
	return s.str();
}
	
																
																
};








Coleccion obj1; 
Coleccion obj2; 
Coleccion obj3; //tercer objeto para calcular las edades de la tercera comunidad saliendo de la suma de la comunidad 1 y 2


int main() { 
	int sMax = 2000; 
	cout<<"Bienvenido al administrador de valores estadisticos de la comunidad"<<endl; 
	//Se asignan los valores de las edades y se ordenan
	obj1.asignar();
	obj1.ordSeleccion();
	system("pause");
	obj2.asignar();
	obj2.ordSeleccion();   
	cout<<obj1.toStringpeque(); //Se muestra el mensaje de que se han generado las edades
	system("pause"); 
	//En caso de querer mostrar las edades, se debe quitar de comentarios los "toString()"
	cout<<"........................................................."<<endl; 
	cout<<"\nDatos de la primera communidad: " << endl; 
	cout<< obj1.toString()<<endl;
	cout << obj1.toStringInforme() << endl; 
	cout<<endl; 
	cout<<"........................................................."<<endl; 
	cout<<endl; 
	system("pause"); 
	cout<<"\nDatos de la segunda comunidad: " << endl;
	cout<< obj2.toString()<<endl;
	cout<<obj2.toStringInforme()<<endl;
	cout<<"............................................................" << endl; 
	system("pause"); 
	cout<<"\nDatos de la tercera communidad: " << endl;
	obj3.ponerObj1(obj1); 
	obj3.setMax(sMax); 
	obj3.ponerObj2(obj2);
	cout<<obj3.toString() << endl; 
	cout<<obj3.toStringInforme() << endl; 
	system("pause"); 
	cout<<"Gracias por utilizar el programa!!" << endl; 
	cout<<"\nPresione cualquier tecla para salir" << endl; 
			
			

	
	
	return 0;
}
