//clase venta.cpp
#include <iostream>
#include <fstream>
#include <windows.h>                                                 //mejorado 2
#include <conio.h>
#include <string.h>
//#include "cliente.cpp"
using namespace std;

//------------------Venta-------------------//
class Venta
{
	private:
		string Producto[10];
		float Cantidad;
		string Cantidades[20];
		string Montos[20];
  float Monto;
  int num;
		string fecha[10];      //01/02/2020
		string Numfactura[10];
		//
		string Nombre[20];    //cliente
		string ApellidoP[20];      //cliente
		string ApellidoM[20];        //cliente
		string Dni[8];
		string Dni2[8];
		//float resultado;

  //
	public:
		float resultado;
		float a;
		float b;
  void agregarventa();
		void mostrar();
		//
		void mostrar_factura();
		void verificar_dni();
		//

};
int i=0;
 void Venta::agregarventa(){                                    //crea venta
	char op;
	do{                        //lee
		system("cls");
        //c++
	    string nombre[20];
	    cout<<"Nombre del cliente: ";
        cin>>Nombre[i];
		cout<<"Apellido Paterno: ";
		cin>>ApellidoP[i];
		cout<<"Apellido Materno: ";
		cin>>ApellidoM[i];
		cout<<"Ingrese Dni: ";
		cin>>Dni[i];
		//c++
  cout<<"Ingresar el nombre del producto: ";
		cin>>Producto[i];
		cout<<"\nIngresar la Cantidad: ";
		cin>>Cantidad;
		cout<<"\Ingrese la cantidad: ";
		cin>>Cantidades[i];
  cout<<"\n Ingresar monto: ";
		cin>>Monto;
		cout<<"\n Ingrese el monto:";
		cin>>Montos[i];
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
	cout<<"-----Mostrar Factura------\n\n";

	int j=0;
	while(j<i){              //es j<i no j<=i corregido  //muestra
		cout<<"\n\n---Venta ["<<j+1<<"] ----\n";
		cout<<"\n Cliente: "<<Nombre[j];
		cout<<" ";
		cout<<ApellidoP[j];
	 	cout<<" ";
		cout<<ApellidoM[j];
		cout<<"\n Dni: "<<Dni[j];
		cout<<"\n Producto: "<<Producto[j];
		a = Monto;
		b = Cantidad;
		cout<<"\n Cantidad: "<<Cantidades[j];
		cout<<"\n Monto: "<<Montos[j];

		cout<<"\n Fecha: "<<fecha[j];
  resultado = a*b;
		cout<<"\n Total: "<<"S/. "<<resultado<<endl;
	//	cout<<"\nNombre factura: "<<Numfact ura[j];
		j++;
	}
//}
//_________________________________________
	/*
void verificar_dni(){
	string Verif_Dni[8];
	cout<<"Verificar Dni: ";
 cin>>Dni2;
 while
	if( Dni2==Dni[j] ){
		cout<<"oka";
	}
}    */
//_________________________________________
}
int main(){
	Venta obj;
	obj.agregarventa();
	system("cls");
	obj.mostrar();
}
