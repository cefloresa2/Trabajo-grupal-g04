/*
clase factura
numero de factura
fecha de factura
cant de product
preciounitarioproducto
precio total
nombre dni

hereda de clase tienda 
clase venta*/








#include <string.h>
#include <iomanip>
#include <iostream>

using namespace std;
int main (){
	
	
	char opc; 
	

		cout<<"\n 1. PRODUCTOS \n ";
	 	cout<<"\n 2. CLIENTES \n ";	
	 	cout<<"\n 3. PROVEEDORES \n ";
	 	cout<<"\n 4. FACTURACION \n ";	
	 	
		cout<<"Ingrese una opcion : ";
		cin>>opc;
		
	switch(opc){
	
	case 1:
	cout<<"\n Registrar producto \n ";
	cout<<"\n Modificar producto \n ";
	cout<<"\n ver producto \n ";
	break;
	
	case 2:
	cout<<"\n Registrar clientes \n ";
	cout<<"\n Moodificar clientes \n ";
	cout<<"\n Ver clientes \n ";
	break;
	
	case 3:
	cout<<"\n Registrar proveedor \n ";
	cout<<"\n Moodificar proveedor \n ";
	cout<<"\n Ver proveedores \n ";
	break;
	
	case 4:
	cout<<"\n Generar factura \n ";
	cout<<"\n Ver facturas \n ";
	break;
}
return 0;
}
