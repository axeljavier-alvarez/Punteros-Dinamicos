#include <iostream>
using namespace std;
main(){
	
	// int edad, *p_edad;
	// direccion de memoria de edad
/*	p_edad =&edad;
	cout<<"Ingrese edad: ";
	cin>>*p_edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad "<<endl;
	} else{
		cout<<"Menor de edad "<<endl;
	} */
	
	
	// punteros con asignacion de memoria dinamica;
	// new = reservar un espacio en memoria
	// delete [] = liberar la memoria
	
	// recolector de basura xd
	
	int total = 0, *p_notas;
	p_notas = new int[total];
	char res;
	
	// DIRECCION DE MEMORIA
	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor: ";
		cin>>res;
	}while(res=='s' || res=='S');
	
	cout<<"-----Mostrar notas---- "<<endl;
	for(int i=0; i<total; i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}
	
	// trash para punteros que no se usen
	delete[] p_notas;
	system("pause");
}
