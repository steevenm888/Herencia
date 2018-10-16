/*Universidad de las Fuerzas Armadas ESPE
 Autores: Shakira Cofre, Guillermo Casanova, Esteban Molina
 Fecha de creación: 15-10-2018  Fecha de modificación: 15-10-2018
 Problema: Verificar un número de cédula de una persona que es un estudiante y sacar el promedio de sus notas.*/
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <locale.h>
#include <stdio.h>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv) {
    Alumno alumno1=Alumno();
    alumno1.pedirDatosAlumno();
    alumno1.mostrarDatosAlumno();
    return 0;
}

