#include<iostream> 
#include<sstream>
#include "ContenedorF1.h"
#include"Empleado.h"
using namespace std;



int main() {

	ContenedorF1 contenedorEmpleados;

	Empleado empleado1("Juan", "111", 250000);
	Empleado empleado2("Ema", "222", 4250000);
	Empleado empleado3("Ariel", "333", 350000);

	//puede realizar un cout a estas líneas de código para que corrobore
	//que la función ingresaEmpleado() retorna un 1 indicando que se pudo ingresar el empleado
	contenedorEmpleados.ingresaEmpleado(empleado1);
	contenedorEmpleados.ingresaEmpleado(empleado2);
	contenedorEmpleados.ingresaEmpleado(empleado3);

	cout << "Buscar empelado 111: " << endl << contenedorEmpleados.buscarEmpleado("111").toString();

	cout << contenedorEmpleados.toString()<<endl;
	
	cout << "Empleado con mejor venta: " << contenedorEmpleados.mejorVenta().getNombre() << endl;

	cout << fixed << setprecision(2) << "total de ventas del departamento: " << contenedorEmpleados.totalVentas();

	return 0;
}