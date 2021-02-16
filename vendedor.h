#include <iostream>
#include <string>
using namespace std;
class vendedor
{
	private:
		string nombre;
		string ID_usuario;
	public:
		vendedor(string,string);
		void leer_producto();
		void leer_cliente();
		void modificar_cliente();
};

vendedor::vendedor(string _nombre,string _ID_usuario)
{
	nombre = _nombre;
	ID_usuario = _ID_usuario;
};

void vendedor::leer_producto()
{
	
};

void vendedor::leer_cliente() 
{
	
};

void vendedor::modificar_cliente()
{
	
};

int main()
{
	return 0;
}


