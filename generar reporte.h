/*Caso de uso : Generar reporte*/
#include <reporte.h>
#include <tienda.h>
#include <venta.h>
#include <iostream>
#include <string>
using namespace std;

//----------------Venta------------------//
class venta
{
	private:
		int producto[100];
		int cantidad;
		int monto;
		//fecha
		int dia;
		int mes;
		string num_factura;
	public:
		void agregar_venta();
};

venta::venta(int _producto[100],int _cantidad,int _monto,int _dia,int _mes,string _num_factura)
{
	producto[100] = _producto[100];
	cantidad = _cantidad;
	monto = monto;
	dia = _dia;
	mes = _mes;
	num_factura = _num_factura;
};

void venta::agregar_venta()
{
	cout<<"Agrege la nueva venta \n";
	
	cout<<"Ingrese el producto";
	cin>>producto;
	cout<<"Ingrese la cantidad";
	cin>>cantidad;
	cout<<"ingrese el monto";
	cin>>monto;
	cout<<"Ingrese la fecha (dd/mm)";
	cin>>dia;   cout<<"/";   cin>>mes;
	cout<<"Ingrese el numero de factura";
	cin>>factura;
};
//------------------Tienda-------------------//
class tienda
{
	private:
		string lista_productos[100];
		int num_productos[100];
		int cantidad_disponible;
		string lista_ventas[100];
		int num_ventas;
	public:
		tienda(int,int,int,string,int);
		void ingresar_productos();
		void restar_productos();
		void informar_agotamiento();
		void actualizar_productos();
		void buscar_productos();
};

tienda::tienda(int _lista_productos[100],int _num_productos,int _cantidad_disponible,string _lista_ventas[100],int _num_ventas)
{
	lista_productos[100] = _lista_productos[100];
	num_productos = _num_productos;
	cantidad_disponible = _cantidad_disponible;
	lista_ventas[100] = _lista_ventas[100];
	num_ventas = _num_ventas;
};

void tienda::ingresar_productos()
{
	int aux;
	
	Cout<<"Ingrese los productos\n\n";
	
	cout<<"Cuantos productos tiene :";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Ingrese nombre del producto :";
		cin>>lista_productos[i];
		cout<<"Ingrese la cantidad que posee de tal producto :";
		cin>>num_productos[i];
	}
	cout<<"\n\n\n\n Lista de productos\n";
	cout<<"Producto                  Cantidad\n";
	for(int i=1;i<=n;i++)
	{
		cout<<lista_productos[i]<<"     "<<num_productos[i];
	}
}

void tienda::actualizar_productos()
{
	
}
//------------------Reporte--------------------//
class reporte
{
	private:
		int dia;
		int mes;
		int tiempo;
	public:
		reporte(int,int,int);
		void nuevo_registro();
		void sumar_ganancias();
		void imprime_reporte();
};

reporte::reporte(int _dia,int _mes,int _tiempo)
{
	dia = _dia;
	mes = _mes;
	tiempo = _tiempo;
};

//------------Metodos------------------//
void reporte::nuevo_registro()
int main()
{
	return 0;
}
