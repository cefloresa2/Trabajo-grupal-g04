
#include <iostream>
#include <fstream>
#include "facctura.h"
using namespace std;
 
int main(){
    tRegistro registro;   //www
    fstream archivo;
    archivo.open("bd.dat", ios::out | ios::binary);
    bool seguir = true;
    while (seguir) {
        
        cout<<"fecha: "; cin.sync(); cin>>registro.fecha;
        cout<<"cantidad: "; cin.sync(); cin>>registro.cantidad;
        cout<<"precio unity: "; cin.sync(); cin>>registro.prec_uni_pro;
        cout<<"Nombre del cliente: "; cin.sync(); cin.getline(registro.item, MAX); // MAX: 80
		cout<<"Codigo: "; cin.sync(); cin>>registro.codigo;
        archivo.write((char *) &registro, SIZE);
        cout<< "Desea agregar otro [S/N]? ";
        char c;
        cin>>c;
        if ((c == 'n') || (c == 'N')) {
            seguir = false;
        }
    }
    archivo.close(); //ss
    return 0;
}

