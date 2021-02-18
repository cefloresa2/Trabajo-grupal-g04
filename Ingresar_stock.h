//Caso de uso: Ingresar stock
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//------------------Producto-------------------//
class producto
{
	private:
		string Mombre;
		int Numero;
		string Categoria;
		int Precio;
		bool Estado;
		string Marca;
	
	public:
		producto(string ,int ,string ,int  ,string);
};

producto::producto(string _Nombre, int _Numero, string _Categoria,int _Precio,string _Marca)
{
	Nombre = _Nombre;
	Numero = _Numero;
	Categoria = _Categoria;
	Precio = _Precio;
	Estado = true;
	Marca = _Marca;
}


//------------------Tienda-------------------//
class tienda 
{
	private:
		producto lista_productos[100];
	public:
		
		void aumentar_stock();
		void ordenar_productos();
		void mostrar_lista();
};

void tienda::aumentar_stock()
{
	int n;
	
	cout<<"Ingrese los productos\n\n";
	
	cout<<"Cuantos productos tiene :";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Ingrese nombre del producto :";
		cin>>Nombre;
		cout<<"Ingrese la cantidad que posee de tal producto :";
		cin>>Numero;
		cout<<"Ingrese la categoria del producto";
		cin>>Categoria;
		cout<<"Ingrese el precio del producto";
		cin>>Precio;
		cout<<"Ingrese la marca del producto";
		cin>>Marca;
	}
	cout<<"\n\n\n\n Lista de productos\n";
	
	cout<<"Productos    \n";
	for(int i=1;i<=n;i++)
	{
		cout<<lista_productos[i];
	}
}

void tienda::ordenar_productos()
{
	
}

void tienda::mostrar_lista()
{
	
}
