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

