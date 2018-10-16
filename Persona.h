#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <locale.h>
using namespace std;
class Persona{
public:
    Persona(string , string, string);
    void setCedula(string);
    void setNombre(string);
    void setApellido(string);
    string getCedula ();
    string getNombre ();
    string getApellido ();
    void mostrarDatosPersona();
private:
    string cedula;
    string apellido;
    string nombre;
};


#endif /* PERSONA_H */

