/*Universidad de las Fuerzas Armadas ESPE
 Autores: Shakira Cofre, Guillermo Casanova, Esteban Molina
 Fecha de creación: 15-10-2018  Fecha de modificación: 15-10-2018
 Problema: Verificar un número de cédula de una persona que es un estudiante y sacar el promedio de sus notas.*/
#include "Persona.h"
#include <iostream>
#include <string>
using namespace std;

//desarrollo de la clase persona
Persona::Persona(char ci[], string nom, string ape){
    strcpy(cedula, ci);
    nombre=nom;
    apellido=ape;
}
Persona::Persona(){

}
void Persona::setCedula(char ci[]){
    strcpy(cedula, ci);
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
void Persona::pedirDatosPersona(){
    int bandera=0;
    cout<<"Ingrese el nombre"<<endl;
    cin>>nombre;
    cout<<"Ingrese el apellido"<<endl;
    cin>>apellido;
    cout<<"Ingrese su cedula"<<endl;
    cin>>cedula;
    for(int i=0;i<=10;i++){
        int aux = cedula[i];
        if(aux < 47 || aux > 57){
            bandera = 1;
        }
    }
    while(strlen(cedula) > 10 || bandera == 1 || !this->verificarCedula(cedula)){
        cout << "Ingrese la cedula de " << nombre << " " << apellido << ": ";
        cin >> cedula;
        bandera = 0;
        for(int j = 0; j < 10; j++){
        int aux = cedula[j];
        if(aux < 47 || aux > 57){
            bandera = 1;
        }
    }

}
}
void Persona::mostrarDatosPersona(){
    setlocale(LC_ALL,"");
    cout<<"\n"<<"Cédula: "<<cedula<<"  Nombre: "<<nombre<<"  Apellido: "<<apellido<<endl;
}
bool Persona::verificarCedula(char _cedula[]){
    
 int suma = 0, aux, decena = 10;
    for(int i = 0; i < 9; i++){
        aux = _cedula[i] - 48;
        if(i == 0 || i == 2 || i == 4 || i == 6 || i == 8){
            aux = aux * 2;
            if (aux >= 10){
                aux = aux - 9;
            }
        }
        suma = suma + aux;
        
    }
    while (decena < suma){
        decena = decena + 10;
    }
    int digitoVerificador = _cedula[9] - 48;
    if(digitoVerificador == (decena - suma)){
        return true;
    }else{
        return false;
    }

}
  

