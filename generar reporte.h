/*Caso de uso : Generar reporte*/
//#include "reporte.h"
//#include "tienda.h"
//#include "venta.h"
#include <iostream>
#include <string>
#include <vector>
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
		//tienda* tie;
	public:
		venta(int [], int, int, int, int, string);
		void agregar_venta();
		
		int getMonto(){
			return monto;
		}
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
	cin>>producto[i];
	cout<<"Ingrese la cantidad";
	cin>>cantidad;
	cout<<"ingrese el monto";
	cin>>monto;
	cout<<"Ingrese la fecha (dd/mm)";
	cin>>dia;   cout<<"/";   cin>>mes;
	cout<<"Ingrese el numero de factura";
	cin>>factura;
};
//------------------Fecha-----------------------//
class fecha
{
	
};

//------------------Reporte--------------------//
class reporte
{
	private:
		int r_dia;
		int r_mes;
		int tiempo;
		int ganancia;
	public:
		reporte(int,int,int);
		void nuevo_reporte();
		void sumar_ganancias();
		void imprime_reporte();
};

reporte::reporte(int _r_dia,int _r_mes,int _tiempo,int _ganacia)
{
	r_dia = _r_dia;
	r_mes = _r_mes;
	tiempo = _tiempo;
	ganancia = _ganancia;
};

void reporte::nuevo_reporte()
{
	cout<<"Ingrese la fecha desde donde quiere empezar el reporte(dd/mm) :";
	cin>>r_dia;   cout<<"/";   cin>>r_mes;
	
	cout<<"Ingrese el numero de dias que tiene que tener el reporte: ";
	cin>>tiempo;
}

void reporte::sumar_ganancias()
{
	ganancia=0;
	
	for(int i=0;i<tiempo;i++)
	{
		if(dia == r_dia && mes == r_mes)
		{
			ganancia = ganancia + monto;
		}
		
		r_dia = r_dia + i; 30 31 28
	}
}

void reporte::imprime_reporte()
{
	cout<<"-------------REPORTE---------------";
	for(int i=0;i<tiempo;i++)
	{
		if(dia == r_dia && mes == r_mes)
		{
			cout<<"Fecha :"<<r_dia<<"/"<<r_mes<<"/2021\n";
			cout<<cantidad<<"  "<<producto<<endl;
		}
		
		r_dia = r_dia + i;
	}
	
	cout<<"\n\nLas ganacias en el tiempo de este reporte es :"<<ganancia;
}
//--------------------------------------//
int main()
{
	return 0;
}
