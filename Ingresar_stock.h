//Caso de uso: Ingresar stock
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//------------------Tienda-------------------//
class tienda
{
	private:
		string lista_productos[100];
		int num_productos[100];
		//int cantidad_disponible[100];
		string cat_productos[100];
		//vector<Ventas*> listaVentas;
		//int num_ventas;
	public:
		tienda(string [],int [],string []);
		//tienda(string [],int [],int [],int [],int);
		void ingresar_stock();
};


//tienda::tienda(string _lista_productos[100],int _num_productos[100],string _cat_productos[100],int _cantidad_disponible[100],string _lista_ventas[100],int _num_ventas)
tienda::tienda(string _lista_productos[100], int _num_productos[100], string _cat_productos[100])
{
	lista_productos[100] = _lista_productos[100];
	num_productos[100] = _num_productos[100];
	cat_productos[100] = _cat_productos[100];
};

void tienda::ingresar_stock()
{
	int n;
	
	cout<<"Ingrese los productos\n\n";
	
	cout<<"Cuantos productos tiene :";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Ingrese nombre del producto :";
		cin>>lista_productos[i];
		cout<<"Ingrese la cantidad que posee de tal producto :";
		cin>>num_productos[i];
		cout<<"Ingrese la categoria del producto";
		cin>>cat_productos[i];
	}
	cout<<"\n\n\n\n Lista de productos\n";
	
	cout<<"Producto                  Cantidad              Categoria\n";
	for(int i=1;i<=n;i++)
	{
		cout<<lista_productos[i]<<"     "<<num_productos[i]<<"      "<<cat_productos[i];
	}
}
