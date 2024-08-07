#pragma once
#include<iostream>
#include <iomanip> // Para usar fixed setprecision
#include<sstream>
using namespace std;
#include "Empleado.h"

class ContenedorF1 { //Contenedor Forma 1: para objetos automáticos en tiempo de compilación
	//Más adelante veremos las 4 formas de hacer un contenerdor de objetos
private:
	Empleado vec[10];
	int tam;
	int can;
public:
	ContenedorF1() {
		tam = 10;
		can = 0;
	}
	virtual ~ContenedorF1();

	int getTam();
	int getCan();

	bool ingresaEmpleado(Empleado& e);

	bool empleadoRepetido(string id);

	void eliminarEmpleado(string id);

	Empleado buscarEmpleado(string id);
	Empleado mejorVenta();
	

	double totalVentas();

	string toString();
};
