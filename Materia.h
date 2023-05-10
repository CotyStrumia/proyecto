#include <iostream>

using namespace std;

class Materia{
private:
    int codigo;
    string nombreM;
    int nota;


public:
    void setCodigo(int _codigo);
    void setNombreM (string _nombreM);
    void setNota (int _nota);

    int getCodigo();
    string getNombreM();
    int getNota();

    void imprimirMateria();

    Materia();

    Materia(string _nombreM, int _nota, int _codigo){
        nombreM=_nombreM;
        nota=_nota;
        codigo=_codigo;
    }
};
