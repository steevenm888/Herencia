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
    Persona(char[], string, string);
    Persona();
    void setCedula(char[]);
    void setNombre(string);
    void setApellido(string);
    string getCedula ();
    string getNombre ();
    string getApellido ();
    bool verificarCedula(char _cedula[]);
    void pedirDatosPersona();
    void mostrarDatosPersona();
private:
    char cedula[10];
    string apellido;
    string nombre;
};


#endif /* PERSONA_H */

