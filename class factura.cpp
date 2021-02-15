#include <iostream>
#include <string.h>
#include <iomanip>
/*
clase factura
numero de factura
fecha de factura
cant de product
preciounitarioproducto
precio total
nombre dni

hereda de clase tienda 
clase venta
*/

using namespace std;  //si no adjunta el tipo public 
					//el sistema lo aceptara a privado 
class Persona{	 //	clase Persona - clase abstracta 
				 //contiene funcion principal pura
    protected:
        char nombre[70]; //nombre
        int fecha; //fecha como fecha

    public:
        void virtual mostrarDatos() = 0;  //funcion virtual pura =0 por eso es pura
        void virtual registrar();     //funcion virtual normal 
};
//implementando registrar(); //void no devuelve nada es vacio
void Persona :: registrar(){ 
    cout<<"\n Atendido por: "; //atendido por quien?
    fflush(stdin);    		//realiza limpieza del buffer de entrada
	gets(nombre); //recibe como unico argumento la variable en la que
				 //debe almacenarse una entrada de usuario
    cout<<"\n Dia/mes actual: "; //dia y mes actual
	cin>>fecha; //fecha como fecha
} //cerrando la funcion con llave 

//______________________________________________________ Cliente
class Cliente : Persona{
    private:
        char client[3][20]; 
        int nclients;
        char cant_prod[5];
        char nom_prod[20];
        char city[20];
    public:
        void leerDatos(); 
        void mostrarDatos();
};
//implementndo leerDatos() 
void Cliente :: leerDatos(){
    Persona :: registrar();
    cout<<"Ingrese numero de clientes: ";
    cin>>nclients;
    for(int i = 0; i < nclients; i++){
        cout<<"Ingrese nombre del cliente #"<<i+1<<" por favor: ";
        fflush(stdin); gets(client[i]);
    }
    cout<<"Ingrese cantidad de producto: "; 
	cin>>cant_prod;
    cout<<"Ingrese nombre del producto: "; 
	fflush(stdin); 
	gets(nom_prod);
    cout<<"Ingrese Sucursal (ciudad): "; 
	fflush(stdin); 
	gets(city); 
}
//implementando mostrarDatos(); cambiar el ; por llave {
void Cliente :: mostrarDatos(){
    char clinete[3]="";
    cout<<left;
    cout<<setw(20)<<nombre;
    cout<<setw(10)<<fecha;
    cout<<setw(40);
    for(int i = 0; i < nclients; i++){
        strcat(clinete,client[i]);
        if(i != nclients-1)
            strcat(clinete,", ");
    }
    cout<<clinete;
    cout<<setw(10)<<cant_prod;
    cout<<setw(15)<<nom_prod;
    cout<<setw(10)<<city;
    cout<<endl;
}
//______________________________________________________ 
class Articulo; //producto clase
//______________________________________________________DFD Proveedor
class Proveedor : Persona{
     
	private: 
        char nom_prov[20];
        int dia_mes;
        int can_t;
        int prec_io;
        Articulo* articulos[10]; //-articulos[]: Articulos en DFD
        int num_prov;
    
	public:
        void leerDatos();
        void mostrarDatos();
        char* getName();
        
        void agregarArticulo(Articulo*);
        void mostrarArticulos();
}; 

void Proveedor :: leerDatos(){
    Persona :: registrar();
    cout<<"Ingrese nombre del proveedor: "; 
	fflush(stdin); gets(nom_prov);
    cout<<"Ingrese dia/mes: "; cin>>dia_mes;
    cout<<"Ingrese cantidad: "; cin>>can_t;
    cout<<"Ingrese precio: "; cin>>prec_io;
}
 
void Proveedor :: mostrarDatos(){
    cout<<left;
    cout<<setw(20)<<nombre; 
    cout<<setw(10)<<fecha;
    cout<<setw(15)<<nom_prov;
    cout<<setw(5)<<dia_mes;
    cout<<setw(5)<<can_t;
    cout<<setw(5)<<prec_io;
    cout<<endl; 
    prec_io = can_t*dia_mes;
}

char* Proveedor :: getName(){
    return nombre;
} 

void Proveedor :: agregarArticulo(Articulo *a){
    articulos[num_prov] = a;
    num_prov = num_prov + 1;
}
//______________________________________________________ dfd persona
class Articulo : Persona{
    private:
        char nom_produ[1][20];
        int nAutores;
        char cant_produt[30];
        Proveedor *revista = NULL;
        char pag[8];
    public:
        void leerDatos();
        void mostrarDatos();
        void asignarRevista(Proveedor*, char[]);
};

void Articulo :: leerDatos(){  
    Persona :: registrar();
    char op;
    cout<<"Cantidad de producto 'DIGITE UNO'(1): ";
    cin>>nAutores;
    for(int i = 0; i < nAutores; i++){
        cout<<"Ingrese nombre de producto #"<<i+1<<" : ";
        fflush(stdin); gets(nom_produ[i]);
    }
    cout<<"Ingrese cantidad "; cin>>cant_produt;
}

void Articulo :: asignarRevista(Proveedor *r, char p[]){
    revista = r;
    strcpy(pag,p);
}

void Articulo :: mostrarDatos(){
    char autores[3]="";
    cout<<left;
    cout<<setw(20)<<nombre;
    cout<<setw(10)<<fecha;
    cout<<setw(40); 
    for(int i = 0; i < nAutores; i++){
        strcat(autores,nom_produ[i]);
        if(i != nAutores-1)
            strcat(autores,", ");
    }
    cout<<autores;
    cout<<setw(15)<<cant_produt;
    //cout<<setw(25);
    if(revista != NULL){
        cout<<revista -> getName()<<" "<<pag;
    } else{
        cout<<"<no asignado>";
    }
    cout<<endl;
}
//______________________________________________________ dfd proveedor
void Proveedor :: mostrarArticulos(){
    if(num_prov != 0){
        for(int i = 0; i < num_prov; i++){
            articulos[i] -> mostrarDatos();
        }
    }
    else {
         cout<<"No hay productos registrados";   
    }
}
//______________________________________________________ int main (){
int main(){
    Cliente listaLibros[10];
    Proveedor listaRevistas[10];
    Articulo listaArticulos[30];  
    int nLib = 0, nRev = 0, nArt = 0, ind = 0, op;
    char opc, pags[8];
 
    do{
        system("CLS");    //borrar datos
        cout<<"\n\t Sistema de facturacion Tienda: \t"<<endl; //titulo
        cout<<"1. AGREGAR CLIENTE:"<<endl;
        cout<<"2. AGREGAR PROVEEDOR: "<<endl;
        cout<<"3. AGREGAR PRODUCTO: "<<endl;
        cout<<"\t -----------Opciones extras----------- \t"<<endl;
        cout<<"4. MOSTRAR LISTA DE CLIENTES: "<<endl;
        cout<<"5. MOSTRAR LISTA DE PROVEEDORES: "<<endl;
        cout<<"6. MOSTRAR LISTA DE PRODUCTOS: "<<endl;
        cout<<"0. Salir"<<endl<<endl;
        cout<<"Selecciones una opcion por favor, [1 ,2 ,3]: "; cin>>op;
        cout<<endl;
        switch(op){
            case 1:
                listaLibros[nLib].leerDatos(); 
                nLib = nLib + 1;
                cout<<endl<<"Registro exitoso!"<<endl;
            break;
            case 2: 
                listaRevistas[nRev].leerDatos();
                nRev = nRev + 1;
                cout<<endl<<"Registro exitoso!"<<endl;
            break;
            case 3: 
                listaArticulos[nArt].leerDatos();
                cout<<"Desea ver productos? (S/N): "; cin>>opc;
                if(opc == 'S' || opc == 's'){
                    cout<<endl;
                    cout<<left;
                    cout<<setw(3)<<"#";
                    cout<<setw(20)<<"Atendido por:";
                    cout<<setw(10)<<"Dia/Mes: ";
                    cout<<setw(15)<<"Proveedor: ";
                    cout<<setw(5)<<"D/M.";
                    cout<<setw(5)<<"Cant.";
                    cout<<setw(5)<<"S/.";
                    cout<<endl;                
                    for(int i = 0; i < nRev; i++){
                        cout<<left<<setw(3)<<i+1;
                        listaRevistas[i].mostrarDatos();
                    }
                    cout<<endl;
                    cout<<"Ingrese numero (#) de proveedor: "; cin>>ind;
                    cout<<"Ingrese precio del producto: "; cin>>pags;
                    listaArticulos[nArt].asignarRevista(&listaRevistas[ind-1], pags);
                    listaRevistas[ind-1].agregarArticulo(&listaArticulos[nArt]);
                }
                nArt = nArt + 1;
                cout<<endl<<"Registro exitoso!"<<endl;
            break; 
            case 4:
                cout<<left;
                cout<<setw(3)<<"#";
                cout<<setw(20)<<"Vendedor:";
                cout<<setw(10)<<"Dia/Mes:";
                cout<<setw(40)<<"Cliente";
                cout<<setw(10)<<"Cantidad:";
                cout<<setw(15)<<"Producto:";
                cout<<setw(10)<<"Sucursal";
                cout<<endl; 
                for(int i = 0; i < nLib; i++){
                    cout<<left<<setw(3)<<i+1;
                    listaLibros[i].mostrarDatos();
                }
            break;
            case 5:
                cout<<left;
                cout<<setw(3)<<"#";
                cout<<setw(20)<<"Recibido por: ";
                cout<<setw(10)<<"Dia/Mes";
                cout<<setw(15)<<"Proveedor";
                
                cout<<setw(5)<<"D/M";
                cout<<setw(5)<<"Cant.";
                cout<<setw(5)<<"S/.";
                cout<<endl;                
                for(int i = 0; i < nRev; i++){
                    cout<<left<<setw(3)<<i+1;
                    listaRevistas[i].mostrarDatos();
                }
                cout<<endl;
                cout<<"Desea visualizar lista productos de un proveedor? (S/N): "; cin>>opc;
                if(opc == 'S' || opc == 's'){
                    cout<<endl;
                    cout<<"Ingrese numero (#) de proveedor: "; cin>>ind;
                    cout<<endl;
                    cout<<setw(20)<<"Recibido por";
                    cout<<setw(10)<<"Dia/Mes";
                    cout<<setw(40)<<"Producto"; 
                    cout<<setw(10)<<"Cantidad";
                    cout<<setw(10)<<"Proveedor";
                    cout<<setw(15)<<"S/."; 
                    cout<<endl; 
                    listaRevistas[ind-1].mostrarArticulos();
                } 
            break; 
            case 6: 
                cout<<left; 
                cout<<setw(3)<<"#";
                cout<<setw(20)<<"Vendedor:";
                cout<<setw(10)<<"D/M";
                cout<<setw(40)<<"Producto";
                cout<<setw(10)<<"Cant.";
                cout<<setw(20)<<"Proveedor S/."; 
                cout<<endl;                
                for(int i = 0; i < nArt; i++){
                    cout<<left<<setw(3)<<i+1;
                    listaArticulos[i].mostrarDatos();
                }
            break;
            case 0:
                cout<<"Gracias Vuelva pronto!"<<endl;
            break;
            default:
                cout<<"Error , digite una opcion valida por favor "<<endl;
            break;
        } 
        cout<<endl;
        system("PAUSE");
    }while(op != 0);
    system("CLS");
    return 0;
}
