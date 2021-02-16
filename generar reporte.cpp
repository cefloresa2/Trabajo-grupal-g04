/*Caso de uso : Generar reporte*/
#include <reporte.h>
#include <tienda.h>
#include <venta.h>
#include <iostream>
#include <string>
using namespace std;

class venta
{
	private:
		int lista_productos[100];
		int num_productos;
};
class reporte
{
	private:
		int dia;
		int mes;
		int tiempo;
	public:
		reporte(int,int,int);
		void sumar_ganancias();
		void imprime_reporte();
};

reporte::reporte(int _dia,int _mes,int _tiempo)
{
	dia = _dia;
	mes = _mes;
	tiempo = _tiempo;
};

int main()
{
	return 0;
}
