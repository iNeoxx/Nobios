#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std; 
class Persona {
private: 
	string nombre; 
	string cedula; 

public: 
	Persona();
	~Persona();
	void setCedula(string); 
	void setNombre(string); 
	string getNombre();
	string getCedula();
	string toString();
};
Persona::Persona(){
	
}
Persona::~Persona(){
	
}
void Persona::setCedula(string pCed){
	cedula = pCed; 
}
void Persona::setNombre(string pName){
	nombre = pName;
}
string Persona::getNombre(){
	return nombre; 
}
string Persona::getCedula(){
	return cedula; 
}
string Persona::toString(){
	stringstream s; 
	s << "El nombre es: " << getNombre() << endl; 
	s << "La cedula es: " << getCedula() << endl; 
	return s.str();
};
#endif

