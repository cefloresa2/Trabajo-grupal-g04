#include <iostream>
#include <fstream>
#include "venta.h"
using namespace std;
							 //toma funcion de factura por ser leerventa()
int main() {
    tRegistro registro;
    fstream archivo;
    //c++ mostrardatos() de cliente
    archivo.open("basedatosventa.dat", ios::in | ios::binary);
    archivo.read((char *) &registro, SIZE);
    int cuantos = archivo.gcount();
    while (cuantos == SIZE) {
        mostrar(registro); // Función mostrar registro
        archivo.read((char *) &registro, SIZE);
        cuantos = archivo.gcount();
        cout<<"\n";
    }
    archivo.close();
    return 0;
}

