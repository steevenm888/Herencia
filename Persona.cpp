#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

//desarrollo de la clase persona
Persona::Persona(string ci, string nom, string ape){
    cedula=ci;
    nombre=nom;
    apellido=ape;
}
void Persona::setCedula(string ci){
    cedula=ci;
}
void Persona::setNombre(string nom){
    nombre=nom;
}
void Persona::setApellido(string ape){
    apellido=ape;
}

// desarrollo los metodos get
string Persona::getCedula(){
    return cedula;
}
string Persona::getNombre(){
    return nombre;
}
string Persona::getApellido(){
    return apellido;
}
//desarrollo del metodo mostrar persona
void Persona::mostrarDatosPersona(){
    setlocale(LC_ALL,"");
    cout<<"\n"<<"Cédula"<<cedula<<"Nombre"<<nombre<<"Apellido"<<apellido<<endl;
}


