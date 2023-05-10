#include <iostream>
#include "Personas.h"
using namespace std;

void Personas::setNombre(string _nombre) {
    nombre=_nombre;
}
string Personas:: getNombre() {
    return nombre;
}
void Personas::setApellido(string _apellido) {
    apellido=_apellido;
}
string Personas::getApellido() {
    return apellido;
}
void Personas::setDni(float _dni) {
    dni=_dni;
}
float Personas::getDni() {
    return dni;
}
void Personas::setEmail(string _email) {
    email=_email;
}
string Personas::getEmail() {
    return email;
}


void Personas::modificacion(float _dni, string _nombre, string _apellido, string _email) {
    setDni(_dni);
    setNombre(_nombre);
    setApellido(_apellido);
    setEmail(_email);
}

void Personas::impresion() {
    cout<<getDni()<<endl;
    cout<<getNombre()<<endl;
    cout<<getApellido()<<endl;
    cout<<getEmail()<<endl;
}
Personas::Personas() : dni{11111111}, nombre{"coty"}, apellido("strumia"), email{"algo@gmail.com"}{}

    Personas::Personas(float _dni, string _nombre, string _apellido, string _email) :
    dni{_dni}, nombre{_nombre}, apellido{_apellido}, email{_email} {}

    //fin superclase

void Alumno::setCarrera(string _carrera) {
    carrera=_carrera;
}
string Alumno::getCarrera() {
    return carrera;
}
void Alumno::setEdad(int _edad) {
    edad=_edad;
}
int Alumno::getEdad() {
    return edad;
}

void Alumno::inscripcion(string _nombreM, int _codigo) {
    materia.setNombreM(_nombreM);
    materia.setCodigo(_codigo);
}
void Alumno::notas(int _nota) {
    materia.setNota(_nota);
}
void Alumno::modificarDatos(string _carrera, int _edad) {
    setCarrera(_carrera);
    setEdad(_edad);
}
void Alumno::consultaAlumno() {
    cout<<"Edad: "<<getEdad()<<endl;
    cout<<"Carrera: "<<getCarrera()<<endl;
    cout<<"Materia: "<<materia.getNombreM()<<endl;
    cout<<"Codigo: "<<materia.getCodigo()<<endl;
    cout<<"Nota: "<<materia.getNota()<<endl;
}

Alumno::Alumno() :
    edad{20}, carrera{"sistemas"}, materia{"Fisica", 0, 0} {}

  Alumno::Alumno(string _carrera, int _edad, float _dni, string _nombre, string _apellido, string _email)
  : Personas(_dni, _nombre, _apellido, _email) {carrera=_carrera; edad=_edad;}

//fin alumno

void Docente::setTitulo(string _titulo) {
    titulo=_titulo;
}
string Docente::getTitulo() {
    return titulo;
}
void Docente::titularMateria(string _nombreM, int _codigo) {
    materia.setNombreM(_nombreM);
    materia.setCodigo(_codigo);
}

Docente ::Docente() :
 titulo{"ingeniero"}, materia{"Fisica", 0, 0}{}

 Docente::Docente(string _titulo, float _dni, string _nombre, string _apellido, string _email)
 :Personas(_dni, _nombre, _apellido, _email){titulo=_titulo;}

