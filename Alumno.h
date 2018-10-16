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
    Alumno(string, string , string, string);
    void setCarnet(string);
    string getCarnet ();
    void mostrarDatosAlumno();
private:
    string carnet;
    
};

#endif /* ALUMNO_H */

