/*Universidad de las Fuerzas Armadas ESPE
 Autores: Guillermo Casanova, Shakira Cofre, Esteban Molina
 Fecha de creación: 15-10-2018  Fecha de modificación: 15-10-2018
 Problema: Verificar un número de cédula de una persona que es un estudiante y sacar el promedio de sus notas.*/

#ifndef REGISTRO_H
#define REGISTRO_H
#include <string>
using namespace std;

class Registro {
public:
    Registro();
    Registro(const Registro& orig);
    virtual ~Registro();
    void setNotas(double, double, double);
    double* getNotas();
    string getEstado();
    double getPromedio();
    void mostrarRegistro();

protected:
    double notas[3];
    double promedio;
    string estado;
    void calcularPromedio();
    void determinarEstado();
};

#endif /* REGISTRO_H */

