//clase venta.cpp
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <string.h>
using namespace std;

//------------------Venta-------------------//
class Venta
{
	private:
		string Producto[10];
		string Cantidad[10];
		string Monto[10];
		string fecha[10];
		string Numfactura[10];

	public:
		void agregarventa();
		void mostrar();

};
int i=0;
void Venta::agregarventa(){                                      //crea venta
	char op;
	do{
		system("cls");
		cout<<"Ingresar el nombre del producto: ";
		cin>>Producto[i];
		cout<<"\nIngresar la Cantidad: ";
		cin>>Cantidad[i];
		cout<<"\nIngresar monto: ";
		cin>>Monto[i];
		cout<<"\nIngresar fecha: ";
		cin>>fecha[i];
		//cout<<"\nIngresar numero de factura: ";
		//cin>>Numfactura[i];
		i++;
		system("cls");
		cout<<"\n\n¿Desea seguir con otra venta?(s/n): ";
		cin>>op;
	}while (op=='s');
}
void Venta::mostrar(){
	cout<<"-----Mostrar las ventas------\n\n";
	int j=0;
	while(j<i){              //es j<i no j<=i corregido
		cout<<"\n\n---Venta ["<<j+1<<"] ----\n";
		cout<<"Nombre producto: "<<Producto[j];
		cout<<"\nCantidad: "<<Cantidad[j];
		cout<<"\nMonto: "<<Monto[j];
		cout<<"\nfecha: "<<fecha[j];
	//	cout<<"\nNombre factura: "<<Numfactura[j];
		j++;
	}
}
int main(){
	Venta obj;
	obj.agregarventa();
	system("cls");
	obj.mostrar();
}
