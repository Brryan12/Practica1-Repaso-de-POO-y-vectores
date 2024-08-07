#pragma once
#include<iostream>
#include <iomanip> // Para usar fixed setprecision
#include<sstream>
using namespace std;

class Empleado {
private:
	string id;
	string nombre;
	double ventas;//tómese como el total de ventas que ha logrado el empleado en su lugar de trabajo
public:

	Empleado(string = "", string = "", double = 0.0); //constructor por defecto y parametrizado

	//sets y gets
	void setNombre(string nombre);
	void setId(string id);
	void setVentas(double ventas);
	string getNombre();
	string getId();
	double getVentas();

	string toString();

	~Empleado();
};
