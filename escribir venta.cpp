#include <iostream>
#include <fstream>
#include "venta.h"
using namespace std;

int main(){
    tRegistro registro;
    fstream archivo;
    archivo.open("basedatosventa.dat", ios::out | ios::binary);
    bool seguir = true;
    while (seguir) {
    	//leerdatos() de cliente

    	
        //cout<<"Dni: "; cin.sync();
		//cin>>registro.dni;

		//cout<<"Nombre: "; cin.sync();
		//cin.getline(registro.nombre, 30); // MAX: 80

		//cout<<"Apellido Paterno: "; cin.sync();
		//cin.getline(registro.apellido, 30); // MAX: 80

		//cout<<"Apellido Materno: "; cin.sync();
		//cin.getline(registro.apellido2, 30); // MAX: 80

		//cout<<"Telefono: "; cin.sync();
		//cin>>registro.telefono;

		//cout<<"Correo: "; cin.sync();
		//cin.getline(registro.correo, 30); // MAX: 80

		//c++
		cout<<"Ingresa Producto: "; cin.sync();
		cin>>registro.producto;

		cout<<"Ingrese Cantidad: "; cin.sync();
		cin>>registro.cantidad;

		cout<<"Ingrese Monto: "; cin.sync();
		cin>>registro.monto;
		
		cout<<"Ingrese Fecha: (DD/MM/AA)"; cin.sync();
		cin>>registro.fecha;
		
		cout<<"Num factura: "; cin.sync();
		cin>>registro.numerofactura;
	
		archivo.write((char *) &registro, SIZE);
        cout<<"Otro [S/N]? ";
        char c;
        cin>>c;
        if ((c == 'n') || (c == 'N')) {
            seguir = false;
        }
        cout<<"\n";
    }
    archivo.close();
    return 0;
}







