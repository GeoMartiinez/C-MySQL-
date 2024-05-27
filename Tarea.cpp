// pr_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Estudiante.h"
#include <iostream>
using namespace  std;

int main()
{

	string codigo, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	cout << "Ingrese Codigo:";
	getline(cin, codigo);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin >> fecha_nacimiento;

	Estudiante e = Estudiante (nombres, apellidos, direccion,telefono, fecha_nacimiento, codigo);

	e.crear();
	e.leer();
	e.actualizar();
	e.borrar();

	system("pause");
	return 0;

}
