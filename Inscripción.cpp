//Codigo personal, creado en casa fuera de los programas asignados en el curso de programación I
#include <iostream>

using namespace std;

int main(){d
	
	string nom, ape;
	int edad, carne;
	int n1;
	cout<<"- - - - Bienvenido al programa - - - -\n"<<endl;
	cout<<"\nIngrese un nombre y un apellido: ";
	cin>>nom;
	cin>>ape;
	cout<<"Ingrese el numero de carne que le fue asignado: ";
	cin>>carne;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"------------------------------------------------\n";
	cout<<"\n1- Medicina"<<endl;
	cout<<"2- Ingenieria"<<endl;
	cout<<"3- Licenciatura"<<endl;
	cout<<"4- Master"<<endl;
	cout<<"Ingrese el numero de la carrera a seguir: ";
	cin>>n1;
	
	/*aqui tiene que ir una condición multiple o anidada para saber
	  que requisitos requiere cada carrera o facultad para luego
	  y a la vez la condición de que si es mayor de edad presentar
	  DPI propio y si no el de su encargado*/
	
	if(edad >= 18){
		cout<<"\n- Presentar fotocopia de DPI"<<endl;
		cout<<"- Presentar cierre de cursos"<<endl;
		cout<<"- Asigancion de cursos"<<endl;
	} else{
		cout<<"\n- Presentar fotocopia de DPI del papa/mama o encargado"<<endl;
		cout<<"- Presentar cierre de cursos"<<endl;
		cout<<"- Asigancion de cursos"<<endl;
		cout<<"-----------------------------------------------------------"<<endl;	
	}
	
	return 0;
}
