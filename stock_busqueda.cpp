//Caso de uso: Ingresar stock
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

//------------------Producto-------------------//
class producto
{
	private:
		string Nombre;
		int Numero;
		string Categoria;
		bool Estado;
		string Marca;
		float Precio;
	
	public:
		producto(string ,int ,string ,float  ,string);
		void actualizarStock(int);
		
		string getNombre(){return Nombre;};
		int getNumero(){return Numero;};
		string getCategoria(){return Categoria;};
		string getMarca(){return Marca;};
		float getPrecio(){return Precio;};
		
};

producto::producto(string _Nombre, int _Numero, string _Categoria,float _Precio,string _Marca)
{
	Nombre = _Nombre;
	Numero = _Numero;
	Categoria = _Categoria;
	Precio = _Precio;
	Estado = true;
	Marca = _Marca;
}

void producto::actualizarStock(int num)
{
	Numero = Numero + num;
}

//------------------Tienda-------------------//
class tienda 
{
	private:
		vector<producto*> lista_productos;
		//vector<producto*> lista_seleccion;
		//vector<producto*> listaProdxCat;
	public:
		
		void aumentar_stock();
		int buscarProductoxNombre(string);
		void mostrar(int);
		vector<producto*> mostrarproductosxcat();
		vector<producto*> seleccionar_productos(vector<producto*>);
};

void tienda::aumentar_stock()
{
	int pos;
	int num;
	float pre;
	string cat, mar, _name;
	
	
		cout<<"\n\nIngrese el nombre del producto que ingresara : ";
	    cin>>_name;
	
	    pos = buscarProductoxNombre(_name);
	
	    if(pos != -1)
		{
	    	cout<<"El producto ya existe en el stock \n\n";
			cout<<"Ingrese la cantidad del producto \n\n:";
			cin>>num;
			
			lista_productos[pos]->actualizarStock(num);
     	}
     	
	    else{
		cout<<"No se encontro "<<_name<<". Se ingresara como un producto nuevo\n\n";
		cout<<"Ingrese cantidad: "; cin>>num;
		cout<<"Ingrese categoria: "; cin>>cat;
		cout<<"Ingrese marca: "; cin>>mar;
		cout<<"Ingrese precio: "; cin>>pre;
		lista_productos.push_back(new producto(_name, num, cat, pre, mar));
	    }
	
}

int tienda::buscarProductoxNombre(string name)
{	
	for(int i=0; i< lista_productos.size();i++)
	{
		if(lista_productos[i]->getNombre() == name)
		{
			return i;
		}
	}
	return -1;
}

void tienda::mostrar(int a)
{
	cout<<lista_productos[a]->getNombre();
	cout<<setw(10)<<lista_productos[a]->getNumero();
	cout<<setw(15)<<lista_productos[a]->getCategoria();
	cout<<setw(25)<<lista_productos[a]->getMarca();
	cout<<setw(35)<<lista_productos[a]->getPrecio();
}
//---------------parte IVAN REYES CHAVEZ-------------------------------------------------

 vector<producto*> tienda::mostrarproductosxcat()
 {
	vector<producto*> listaProdxCat;
	string cate;
	cout<<"ingresar categoria a buscar:";
	cin>>cate;
	for(int i=0; i< lista_productos.size();i++)
	{
		if(lista_productos[i]->getCategoria() == cate)
		{
			listaProdxCat.push_back(lista_productos[i]);
		}
	}
	return listaProdxCat;
} 
vector<producto*> tienda::seleccionar_productos(vector<producto*>listaProdxCat)
{
	vector<producto*>lista_seleccion;
	int opc,i;
		cout<<"----------LISTA DE PRODUCTOS POR CATEGORIA--------------"<<endl;
		cout<<"hola mundo2"<<endl;
		for( i=0;i<listaProdxCat.size();i++)
		{
		
			cout<<i<<"."<<listaProdxCat[i]->getNombre()<<endl;
		}
		do
		{
		
		cout<<"ingrese el numero del producto:";
		cin>>opc;
		if(opc<listaProdxCat.size())
			lista_seleccion.push_back(listaProdxCat[opc]);
		}while(opc<i);
	return lista_seleccion;
		}
	  

int main()
{
	int aux;
	tienda produc;
	cout<<"Cuantos productos ingresara :";
	cin>>aux;
	
	for(int i=0;i<aux;i++)
	{
		produc.aumentar_stock();
	}
	
	cout<<"\n\n\t\t\t Lista de productos\n\n";
	
	for(int i=0;i<aux;i++)
	{
		produc.mostrar(i);
		cout<<endl;
	}
	cout<<"hola mundo"<<endl;
	vector<producto*>ivan;
	ivan=produc.mostrarproductosxcat();
	vector<producto*>martin;
	
	martin=produc.seleccionar_productos(ivan);
	cout<<"Lista de productos sleccionados: "<<endl;
	for(int i = 0; i < martin.size(); i++){
		cout<<martin[i]->getNombre()<<endl;
	}
	return 0;
}
