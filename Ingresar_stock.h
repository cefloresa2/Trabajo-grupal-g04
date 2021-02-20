//Caso de uso: Ingresar stock
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//------------------Producto-------------------//
class producto
{
	private:
		string Nombre;
		int Numero;
		string Categoria;
		int Precio;
		bool Estado;
		string Marca;
	
	public:
		producto(string ,int ,string ,int  ,string);
		void actualizarStock(int,int);
		
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

void producto::actualizarStock(int numero,int posicion)
{
	lista_productos[posicion]->getNumero() + numero;
}

//------------------Tienda-------------------//
class tienda 
{
	private:
		vector<producto*> lista_productos;
		int aux;
	public:
		
		void aumentar_stock();
		void ordenar_productos();
		int actualizarStock(int);
		int buscarProductoxNombre(string);
		void mostrarProductosxCategoria(string);
		
};

void tienda::aumentar_stock()
{
	int n;
	int pos;
	int num;
	string cat, pre, mar, name;
	
	cout<<"Cuantos productos ingresara :";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{ 
	
		cout<<"Ingrese el nombre del producto que ingresara : ";
	    cin>>name;
	
	    pos = buscarProductoxNombre(name);
	
	    if(pos != -1){
	    	cout<<"El producto ya existe en el stock \n\n";
			cout<<"Ingrese la cantidad del producto :";
			cin>>num;
			
			lista_productos[pos]->actualizarStock(num,pos);
     	}
     	

	    else{
		cout<<"No se encontro "<<name<<". Se ingresara como un producto nuevo"<<endl;
		cout<<"Ingrese cantidad: "; cin>>num;
		cout<<"Ingrese categoria: "; cin>>cat;
		cout<<"Ingrese precio: "; cin>>pre;
		cout<<"Ingrese marca: "; cin>>mar;
		lista_productos.push_back(new producto(name, num, cat, pre, mar));
	    }
	 
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

