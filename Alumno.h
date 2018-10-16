/*Universidad de las Fuerzas Armadas ESPE
 Autores: Shakira Cofre, Guillermo Casanova, Esteban Molina
 Fecha de creación: 15-10-2018  Fecha de modificación: 15-10-2018
 Problema: Verificar un número de cédula de una persona que es un estudiante y sacar el promedio de sus notas.*/
#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
#include "Registro.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <locale.h>
using namespace std;
class  Alumno : public Persona, public Registro {
public:
    Alumno(char[], string , string, string);
    Alumno();
    void setCarnet(string);
    string getCarnet ();
    void mostrarDatosAlumno();
    void pedirDatosAlumno();
private:
    string carnet;
    
};

#endif /* ALUMNO_H */

