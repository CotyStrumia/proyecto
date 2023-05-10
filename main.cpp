#include <iostream>
#include "Personas.h"
using namespace std;


int main() {
    string cinNombre, cinApellido, cinEmail, cinCarrera, cinTitulo, cinMateria, cinNombreM;
    float cinDni;
    int cinEdad, cinCodigo, cinNota;
    int opcion = 0;
    int usuario=0;

    cout<< "Que tipo de usuario es? Ingrese 1 para alumno, ingrese 2 para docente"<<endl;
    cin>>usuario;

    if (usuario==1){
        cout << "Ingrese su dni" << endl;
        cin >>cinDni;
        cout << "Ingrese su nombre" << endl;
        cin >> cinNombre;
        cout << "Ingrese su apellido" << endl;
        cin >> cinApellido;
        cout << "Ingrese su email" << endl;
        cin >> cinEmail;
        cout << "Ingrese su carrera" << endl;
        cin >> cinCarrera;
        cout<<"Ingrese su edad"<<endl;
        cin>>cinEdad;
        Alumno alumno1 (cinCarrera, cinEdad, cinDni, cinNombre, cinApellido, cinEmail);


        cout << "Ingrese la opcion a ejecutar: " << endl;
        cout << "1.Inscripcion a materia" << endl;
        cout << "2.Cargar nota" << endl;
        cout << "3.Modificar datos" << endl;
        cout << "4.Salir" << endl;
        cin>>opcion;
        switch (opcion) {
            case 1:{
                cout << "Ingrese el nombre de la materia" << endl;
                cin >>cinNombreM;
                cout << "Ingrese el codigo de la materia" << endl;
                cin >> cinCodigo;
                alumno1.inscripcion(cinNombreM, cinCodigo);
                break; }
            case 2:{
                cout <<"Ingrese su nota"<<endl;
                cin>>cinNota;
                alumno1.notas(cinNota);
                break;}
            case 3:{
                cout << "Ingrese su carrera" << endl;
                cin >> cinCarrera;
                cout<<"Ingrese su edad"<<endl;
                cin>>cinEdad;
                alumno1.modificarDatos(cinCarrera, cinEdad);
                break;}
            case 4:
                return 0;
            break;
        }

    }else if (usuario==2){
        cout << "Ingrese su dni" << endl;
        cin >>cinDni;
        cout << "Ingrese su nombre" << endl;
        cin >> cinNombre;
        cout << "Ingrese su apellido" << endl;
        cin >> cinApellido;
        cout << "Ingrese su email" << endl;
        cin >> cinEmail;
        cout << "Ingrese su titulo"<<endl;
        cin>>cinTitulo;
        Docente docente1 (cinTitulo, cinDni, cinNombre, cinApellido, cinEmail);

        cout << "Ingrese la opcion a ejecutar: " << endl;
        cout << "1.Anotar titular" << endl;
        cout << "2.Salir" << endl;
        cin >> opcion;
        switch (opcion) {

            case 1:
            {
                cout << "Ingrese el nombre de la materia" << endl;
                cin >>cinNombreM;
                cout << "Ingrese el codigo de la materia" << endl;
                cin >> cinCodigo;
                docente1.titularMateria(cinNombreM, cinCodigo);
                break; }

            case 2:
                return 0;
                break;
        }
    }


}

