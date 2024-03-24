#include <iostream>

using namespace std;

/*  UNA VARIABLE CONTIENE 3 DATOS */
/* PUNTERO 2 OPERADORES CLAVE*/
main(){
	
	/* Puntero */
	int edad=25, *p_edad;
	
	/* Variable puntero con asterisco*/
	
	p_edad = &edad;
	cout<<"Edad "<<edad<<endl;
	// Con el &edad mostramos la ubicacion y con *p_edad mostramos el valor
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	/* 2 */
	cout<<"Cambiar Valores" <<endl;
	
	*p_edad = 40;
	
	cout<<"Variable Edad "<<edad<<endl;
	// Con el &edad mostramos la ubicacion y con *p_edad mostramos el valor
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	/* 3 */
	cout<<"Cambiar Valores" <<endl;

    int edad2=100;
	p_edad = &edad2;
	
	edad=400;
	cout<<"Variable Edad "<<edad<<endl;
	// Con el &edad mostramos la ubicacion y con *p_edad mostramos el valor
	cout<<"Puntero Edad: "<<*p_edad<<endl;
	
	cout<<"Variable Edad 2: "<<edad2<<endl;

	system("pause");
}
