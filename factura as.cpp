#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream archivo; //crea un objeto de la clase ofstream
    char nom[20]; //para nombre en cadena de caratceres 
    int cli,cant_prod_in,cant_pro;
    char ape_P[20];
	char ape_M[20];
    char nom_pro[30];
	int dni;
	float pre_un,tt;
	cout<<"Factura 123\n";
 
    //abre el archivo en forma de escritura (ios::out)
    archivo.open("factura123.txt",ios::out);
 
    //comprueba si el archivo fallo al querer crearlo/abrirlo
    if(!archivo)
    {
        cout<<"No se puede abrir el archivo error"<<endl;
    }
    else
    { 	
		//c++
		cout<<"Cuantos clientes desea registrar:"; cin>>cli;
        for(int i=1; i<=cli;i++){
        	//bloc 
			archivo<<"Factura N"<<i<<endl;
        	archivo<<"Codigo: FF0000"<<i<<endl;        	
        //c++	
        cout<<"Escriba nombre del cliente: "; cin>>nom;
		cout<<"Apellido Paterno: "; cin>>ape_P;
		cout<<"Apellido Materno: "; cin>>ape_M;
		cout<<"Dni del cliente: "; cin>>dni;	
			//bloc
			archivo<<"Cliente: "<<nom<<" "<<ape_P<<" "<<ape_M<<endl;
        	archivo<<"Dni: "<<dni<<endl;
		//c++
			cout<<"Ingrese cantidad de productos a ingresar: "; cin>>cant_prod_in;
		for( int j=1; j<=cant_prod_in; j++ ){
		
		cout<<"Ingrese nombre del producto: "; cin>>nom_pro;
			//bloc
			archivo<<"Producto: "<<nom_pro<<endl;
		//c++
		cout<<"Ingrese cantidad del producto: "; cin>>cant_pro;
			//bloc
			archivo<<"Cantidad: "<<cant_pro<<" unidades"<<endl;
		//c++
		cout<<"Ingrese precio por unidad: "; cin>>pre_un;
			//bloc
			archivo<<"Precio Unitario: "<<"S/. "<<pre_un<<endl;
		//c++
		tt=pre_un*cant_pro;
			//bloc
			archivo<<"Precio Total: "<<tt<<" Soles"<<endl;
									}
    }		
        	archivo.close(); //cierra el manejador de archivo
        cout<<"!!!Los datos fueron agregados!!!"<<endl;
    }
    cout<<endl;
    return 0;
}

