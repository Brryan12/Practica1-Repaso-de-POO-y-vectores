#include "ContenedorF1.h"


	ContenedorF1::~ContenedorF1() {}

	int ContenedorF1::getTam() { return tam; }
	int ContenedorF1::getCan() { return can; }

	bool ContenedorF1::ingresaEmpleado(Empleado& e) { //habrá alguna forma de evitar que ingresen empleados con un id que ya exista en el vector?
		if (!empleadoRepetido(e.getId())) {

			if (can < tam) {
				vec[can++] = e;
				return true;
			}
		}
		return false;
	}

	bool ContenedorF1::empleadoRepetido(string id) {
		for (int i = 0; i < can; i++) {
			if (vec[i].getId() == id)
				return true;
		}
		return false;
	}

	void ContenedorF1::eliminarEmpleado(string id) {
		for (int i = 0; i < can; i++) { //i=1 can=3
			if (vec[i].getId() == id)
				for (int j = i; j < can - 1; j++) { //j=1 can=2 ///ep j se asigna a i xq arriba donde coincidio el id es el numero del espacio del vector que se desea eliminar,por eso abajo se asigna el j al siguiente
					vec[j] = vec[j + 1];  //el j eliminado se escribe la informacion del espacio siguiente
				}
			can--; //can=2
		}

	}
	Empleado ContenedorF1::buscarEmpleado(string id) {
		Empleado empBuscado = vec[0];
		for (int i = 0; i < can; i++)
			if (vec[i].getId() == id)
				empBuscado = vec[i];
		return empBuscado;
	}

	Empleado ContenedorF1::mejorVenta() {
		Empleado mejor = vec[0];
		double max = 0.0;
		for (int i = 0; i < can; i++) {
			if (max < vec[i].getVentas()) {
				max = vec[i].getVentas();
				mejor = vec[i];
			}
		}
		return mejor;
	}

	double ContenedorF1::totalVentas() {
		double total = 0.0;
		for (int i = 0; i < can; i++) {
			total += vec[i].getVentas();
		}
		return total;
	}

	string ContenedorF1::toString() {
		stringstream s;
		s << "------------------------" << endl;
		for (int i = 0; i < can; i++)
			s << vec[i].toString();
		s << "------------------------" << endl;
		return s.str();
	}

