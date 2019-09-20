/*
Alumno: Noel Mu;oz Ram[irez
*
Instituto: UNA
*
Profesor: Maikol
*
Archivo: Vehiculo.h
*/

#ifndef VEHICULO_H
#define VEHICULO_H
#include<iostream>
#include<string>
struct Vehiculo {
private:
	int id;
	std::string tipo;
	float costo;
	
public:
	Vehiculo();
	Vehiculo(int, std::string, float);
	virtual ~Vehiculo();

	void setID(int);
	int getID();

	void setTipo(std::string);
	std::string getTipo();

	void setCosto(float);
	float getCosto();

	void agregarVehiculo();
	void eliminarVehiculo();
	float costoVehiculo();
	std::string datosVehiculo();













};
#endif //VEHICULO_H