#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int vector[10],aux1,aux2;
	for (int i=0; i<10; i++){
			vector[i]=1+rand()%99;
	}
		for(int i=0; i<10; i++){
		aux1=i;
		for(int j= i+1; j<10; j++)
		if(vector[aux1]> vector[j])
		aux1=j;
		aux2=vector[aux1];
		vector[aux1]=vector[i];
		vector[i]=aux2;
	}
		for(int i=0;i<10;i++){
			cout<<"["<<vector[i]<<"]"<<endl;
		}
	//Busqueda Lineal
	int medio;
    int bandera,final,aux3;
    cout<<"Ingrese elemento a Buscar\n";
    cin>>medio;
    do
     {
     	for(int i=0;i<10;i++){
     		aux2=vector[i];
     		final=i;
     		if(aux2==medio){
     			bandera=1;
     			aux3=i;
     			final=10;
     			break;
			 }
			 if(aux2!=medio && final==9){
			 	bandera=0;
			 	break;
			 }
		 }
     }while(bandera!=0 && final<9);
     if(bandera==0){
     	cout<<"No se ha encontrado el elemento en ninguna posici"<<char(162)<<"n"<<endl;
	 }else{
	 	cout<<"Elemento encontrado en la posici"<<char(162)<<"n "<<aux3+1<<endl;
	 }
//Busqueda Binaria
    int primero = 0;
    int mitad;
    int ultimo = 10 - 1;
 	int j=0;
    while (primero <= ultimo) {
        mitad = (primero + ultimo) / 2;
        if (aux2 == vector[mitad]) {
        	bandera=1;
        	j=mitad+1;
            //cout << "Se encuentra en la posici"<<char(162)<<"n " << mitad + 1 << endl;
            break;
        } else {
            if (vector[mitad] > aux2) {
                ultimo = medio - 1;
            } else {
                primero = medio + 1;
            }
            //bandera=-1;
        }
        break;
    }
if(bandera!=1){
	cout<<"No se encontr"<<char(162)<<" ese elemento"<<endl;
}else{
	cout<<"El Elemento se encontr"<<char(162)<<" en la posici"<<char(162)<<"n "<<aux3+1<<endl;
}
    
}	 
