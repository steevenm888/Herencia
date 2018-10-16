#ifndef ALUMNO_H
#define ALUMNO_H
#include "Persona.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <locale.h>
using namespace std;
class  Alumno : public Persona {
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

