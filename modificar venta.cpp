 #include <iostream>
#include <fstream>
#include "venta.h"
using namespace std;
int main() {
	tRegistro registro;
	fstream archivo;
	//c++ modificarDatos() de factura
	archivo.open("basedatosventa.dat", ios::in | ios::out | ios::binary);
	archivo.seekg(0, ios::end);
	int pos = archivo.tellg();
	int numReg = pos / SIZE;
	cout<<"Numero de registros: " <<numReg<<endl;
	int num;
	cout<<"Registro numero? ";
	cin>>num;
	if((num > 0) && (num <= numReg)){
		archivo.seekg((num - 1) * SIZE, ios::beg);
		archivo.read( (char *) &registro, SIZE);
		mostrar(registro);


	//_______________________________________________
	cout<<endl<< "Cambiar Producto: [S/N]? ";
	char c;
	cin.sync();
	cin>>c;
	if ((c == 's') || (c == 'S')) {
		cout<<"Producto: ";
		cin>>registro.producto;
	}
	//_______________________________________________
	cout<<endl<< "Cambiar Cantidad [S/N]? ";
	char cw;
	cin.sync();
	cin>>cw;
	if ((c == 's') || (c == 'S')) {
		cout<<"Cantidad: ";
		cin>>registro.cantidad;
	}
	//_______________________________________________
	cout<<endl<< "Cambiar Monto [S/N]? ";
	char cs;
	cin.sync();
	cin>>cs;
	if ((c == 's') || (c == 'S')) {
		cout<<"monto: ";
		cin>>registro.monto;
	}
	//_______________________________________________
	
	cout<<endl<< "Cambiar fecha [S/N]? ";
	char ct;
	cin.sync();
	cin>>ct;
	if ((c == 's') || (c == 'S')) {
		cout<<"fecha [DD/MM//AA]: ";
		cin>>registro.fecha;
	}
	//_______________________________________________
	cout<<endl<<"Cambiar Num factura [S/N]? ";
	cin.sync();
	cin>>c;
	if ((c == 's') || (c == 'S')) {
		cout<<"Num Factura: ";
		cin>>registro.numerofactura;
	}
	//_______________________________________________
	

	/*
	cout<<endl<<"Cambiar nombre [S/N]? ";
	char cs;
	cin.sync();
	cin>>c;
	if((c == 's') || (c == 'S')){
		cout<<"Nombre: ";
		cin.sync();
		cin.getline(registro.nombre, 80);
	}
	//_______________________________________________
	cout << endl << "Cambiar producto [S/N]? ";
	cin.sync();
	cin>>c;
	if ((c == 's') || (c == 'S')) {
		cout<<"Producto: ";
		cin>>registro.producto;
	}
	//_______________________________________________
	cout<<endl<<"Cambiar cantidad [S/N]? ";
	cin.sync();
	cin>>c;
	if ((c == 's') || (c == 'S')) {
		cout<<"Cantidad: ";
		cin>>registro.cantidad;
	}
	*/
	//_______________________________________________


		archivo.seekg((num - 1) * SIZE, ios::beg);
		archivo.write( (char *) &registro, SIZE);
		cout << endl << "Registro actualizado:" << endl;
		archivo.seekg((num - 1) * SIZE, ios::beg);
		archivo.read( (char *) &registro, SIZE);
		mostrar(registro);
	}
	archivo.close();
	return 0;
}




