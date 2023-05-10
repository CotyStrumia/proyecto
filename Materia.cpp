#include <iostream>
#include "Materia.h"
using namespace std;

void Materia::setCodigo(int _codigo) {
    codigo=_codigo;
}
int Materia::getCodigo() {
    return codigo;
}
void Materia::setNombreM(string _nombreM) {
    nombreM=_nombreM;
}
string Materia::getNombreM() {
    return nombreM;
}
void Materia::setNota(int _nota) {
    nota=_nota;
}
int Materia::getNota() {
    return nota;
}

Materia::Materia():nombreM{" "}, codigo{0}, nota{0} {}

//darle funciones