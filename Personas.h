#include <iostream>
#include "Materia.h"
using namespace std;

class Personas {
protected:
    string nombre;
    string apellido;
    float dni;
    string email;

public:
    void setNombre (string _nombre);
    void setApellido (string _apellido);
    void setDni (float _dni);
    void setEmail(string _email);

    string getNombre();
    string getApellido();
    float getDni();
    string getEmail();
    void modificacion (float _dni, string _nombre, string _apellido, string _email);
    void impresion ();

    //constructores
    Personas();
    Personas(float _dni, string _nombre, string _apellido, string _email);

};

class Alumno: public Personas{
private:
    string carrera;
    int edad;
    Materia materia;
public:
    void setCarrera(string _carrera);
    void setEdad(int _edad);

    string getCarrera();
    int getEdad();

    void inscripcion(string _nombreM, int _codigo);
    void notas(int _nota);
    void modificarDatos(string _carrera, int _edad);
    void consultaAlumno();

    //constructores
    Alumno();
    Alumno(string _carrera, int _edad, float _dni, string _nombre, string _apellido, string _email);
};

class Docente: public Personas{

private:
    string titulo;
    Materia materia;

public:
    void setTitulo(string _titulo);

    string getTitulo();


    void titularMateria(string _nombreM, int codigo);
    Docente ();
    Docente(string _titulo, float _dni, string _nombre, string _apellido, string _email);

};


