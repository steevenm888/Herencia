/*Universidad de las Fuerzas Armadas ESPE
 Autores: Guillermo Casanova, Shakira Cofre, Esteban Molina
 Fecha de creación: 15-10-2018  Fecha de modificación: 15-10-2018
 Problema: Verificar un número de cédula de una persona que es un estudiante y sacar el promedio de sus notas.*/

#include "Registro.h"
#include <iostream>
using namespace std;

Registro::Registro() {
    this->notas[0]=0;
    this->notas[1]=0;
    this->notas[2]=0;
    this->promedio=0;
    this->estado="Pendiente";
}

Registro::Registro(const Registro& orig) {
}

Registro::~Registro() {
}

void Registro::calcularPromedio(){
    this->promedio=(this->notas[1]+this->notas[2]+this->notas[3])/3;
}

void Registro::determinarEstado(){
    if(this->promedio>=14){
        this->estado="Aprobado";
    }
    else{
        this->estado="Reprobado";
    }
}

void Registro::setNotas(double nota1, double nota2, double nota3){
    this->notas[0]=nota1;
    this->notas[1]=nota2;
    this->notas[2]=nota3;
    this->promedio=(nota1+nota2+nota3)/3;
    if(this->promedio>=14){
        this->estado="Aprobado";
    }
    else{
        this->estado="Reprobado";
    }   
}

string Registro::getEstado(){return this->estado;}
double Registro::getPromedio(){return this->promedio;}
double* Registro::getNotas(){
    double* notas=this->notas;
    return notas;
}

void Registro::mostrarRegistro(){
    cout<<"Nota 1: "<<this->notas[0]<<endl;
    cout<<"Nota 2: "<<this->notas[1]<<endl;
    cout<<"Nota 3: "<<this->notas[2]<<endl;
    cout<<"Promedio: "<<this->promedio<<endl;
    cout<<"Estado: "<<this->estado<<endl;
}


