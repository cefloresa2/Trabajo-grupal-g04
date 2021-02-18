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
		vector<producto*> lista_productos;
	public:
		
		void aumentar_stock(string name, int cant);
		void ordenar_productos();
		int buscarProducto(string);
		
};

void tienda::aumentar_stock(name, cant)
{
	int n;
	int pos;
	string cat, pre, marc
	
	pos = buscarProducto(name);
	
	if(pos != -1){
		lista_productos[pos]->actualizarStock(cant);
	}
	else{
		cout<<"No se encontro "<<name<<". Se ingresara y un producto nuevo"<<endl;
		cout<<"Ingrese categoria: "; cin>>cat;
		cout<<"Ingrese precio: "; cin>>pre;
		cout<<"Ingrese marca: "; cin>>mar;
		lista_productos.push_back(new producto(name, cant, cat, pre, mar));
	}
	
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

int tienda::buscarProductoxNombre(string name){	
	for(int i=0; i< lista_productos.size();i++){
		if(lista_productos[i]->getNombre() == name){
			return i;
		}
	}
	return -1;
}

vector<Producto*> tienda::mostrarProductosxCategoria(string cat){
	vector<Producto*> listaProdxCat;
	for(int i=0; i< lista_productos.size();i++){
		if(lista_productos[i]->comprobarcategoria(cat)){
			listaProdxCat.push_back(lista_productos[i]);
		}
	}
	return listaProdxCat;
}



void tienda::ordenar_productos()
{
	
}

void tienda::mostrar_lista()
{
	
}
