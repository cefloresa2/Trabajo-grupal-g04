#include <iostream>
using namespace std;

//const int MAX = 10;
struct tRegistro{
    /*int dni;
    char nombre[30];
    int telefono;
    char correo[30];
    char apellido[30];
    char apellido2[30];
    */
    char producto[20];
    int cantidad;
    int monto;
    char fecha[8];
	int numerofactura;
};
int SIZE = sizeof(tRegistro);

void mostrar(tRegistro &reg){
	//se mostrara en leer venta()
	cout<<"Producto: "<<reg.producto<<endl;
	cout<<"Cantidad: "<<reg.cantidad<<endl;
	cout<<"Monto: "<<reg.monto<<endl;
	cout<<"Fecha: "<<reg.fecha<<endl;
	cout<<"Num factura: "<<reg.numerofactura<<endl;
	
    //cout<<"Dni: "<<reg.dni<<endl;
    //cout<<"Nombre: "<<reg.nombre<<" "<<reg.apellido<<" "<<reg.apellido2<<endl;
    //cout<<"Telefono: "<<reg.telefono<<endl;
    //cout<<"Correo: "<<reg.correo<<endl;
}

