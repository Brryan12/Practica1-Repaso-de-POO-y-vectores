#include"Empleado.h"



Empleado::Empleado(string nombre, string id, double ventaTotal) {
	this->id = id;
	this->nombre = nombre;
	this->ventas = ventaTotal;
}

//sets y gets
void Empleado::setNombre(string nombre) { this->nombre = nombre; }
void Empleado::setId(string id) { this->id = id; }
void Empleado::setVentas(double ventas) { this->ventas = ventas; }
string Empleado::getNombre() { return nombre; }
string Empleado::getId() { return id; }
double Empleado::getVentas() { return ventas; }

string Empleado::toString() {
	stringstream s;
	s << "------- Empleado -------" << endl
		<< "ID: " << id << endl
		<< "Nombre: " << nombre << endl
		<< fixed << setprecision(2) << "Venta total: " << ventas << endl
		/*
		*  el fixed y el setprecision ayudan a evitar que se muestre la notación
		*  científica del número en caso de que sea muy grande
		*/
		<< "-----------------------" << endl;
	return s.str();
}

Empleado::~Empleado() {}
