#include "Alumno.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <locale.h>
//desarrollo de la clase alumno

Alumno::Alumno(char ci[], string nom, string ape, string car):Persona( ci, nom, ape){
    this->carnet=car;
}
Alumno::Alumno(){

}
void Alumno::setCarnet(string car){
    carnet=car;
}

// desarrollo los metodos get
string Alumno::getCarnet(){
    return carnet;
}
//desarrollo del metodo mostrar persona
void Alumno::pedirDatosAlumno(){
    pedirDatosPersona();
    cout<<"Ingrese su carnet"<<endl;
    cin>>carnet;
}
void Alumno::mostrarDatosAlumno(){
    setlocale(LC_ALL,"");
    mostrarDatosPersona();
    cout<<"\n"<<"Carnet  "<<getCarnet()<<endl;
}



