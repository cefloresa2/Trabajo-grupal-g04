#include<iostream>
#include<conio.h>
 using namespace std;
 
 class tienda
 {
 	public:
 		string lista_productos[100];
 		string n_product[100];
 		int cant_disp;
 		string list_vent[];
 		int n_ventas;
 	public:
 		void ingresar_productos();
 		void mostrar_productos();
 		void restar_productos();
 		void informar_agotamientos();
 		void actualizar_productos();
 		void buscar_producto();
 		void listar_ventas_fecha();
 		
 };
 
void tienda::ingresar_productos()
 {
 	int n;
 	cout<<"ingrese la cantidad de productos que va a ingresar :";
 	cin>>n;
 	string nombre;
 	string cantidad[n];
 	for(int i=0;i<n;i++)
 	{
 		cout<<"INGRESE NOMBRE DEL PRODUCTO:";
 		cin>>nombre;
 		cout<<"INGRESE LA CANTIDAD:";
 		cin>>cantidad[i];
 		lista_productos[i]=nombre;
 		n_product[i]=cantidad[i];
 	}
 }
 void tienda::mostrar_productos()
 {
 	int n;
 	for(int i=0;i<n;i++)
 	{	 
 		cout<<i<<"->"<<lista_productos[i]<<"---------->"<<n_product[i]<<endl;
	}
 }
 
 /*void tienda::buscar_producto()
 {
 	int i,prod,n;
 	char band = 'F';
 	
 	i=0;
 	while((band == 'F')&&(i<n))
 	{
 		if(lista_productos[i]== prod)
 		{
 			band = 'V';
		 }
		 i++;
	 }
	 
	 if(band == 'F')
	 {
	 	cout<<"EL PRODUCTO NO SE ENCUENTRA EN EL STOCK"<<endl;
	 }
	 else if(band == 'V')
	 {
	 	cout<<"EL PRODUCTO HA SIDO ENCONTRADO"<<lista_productos[i-1]<<endl;
	 }
 }*/
 class productos
 {
 	public:
 		char nombre[];
 		int precio;
 		int stock;
 		char estado[];
 		char categoria[];
 		char marca[];
 		
 	public:
 		void leer_datos();
 		void mostrar_datos();
 		void validar_existencia();
 		
 };
 int main()
 {
 	tienda a;
 	a.ingresar_productos();
 	a.mostrar_productos();
 	//a.buscar_producto();
 }
