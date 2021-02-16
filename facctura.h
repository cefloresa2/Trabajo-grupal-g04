
#include <iostream>
using namespace std;
 
const int MAX = 10;
struct tRegistro{   //www
    
    char fecha[4];
	int cantidad;
	float prec_uni_pro;
    char item[MAX];
    int codigo;
};
int SIZE = sizeof(tRegistro);
 
 //1
void mostrawr(tRegistro &reg){
    cout<<"fecha: "<<reg.fecha<<endl;
    cout<<"cantidad: "<<reg.cantidad<<endl;
    cout<<"precio unity: "<<reg.prec_uni_pro<<endl;
    cout<<"nombre del cliente: "<<reg.item<<endl;
    cout<<"Codigo: "<<reg.codigo<<endl;
}

//2



//3

//4

//5

//6

