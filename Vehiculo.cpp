/*
 * Alumno: Noel Mu;oz Ram[irez
 *
 * Instituto: UNA
 *
 * Profesor: Maikol 
 *
 * Archivo: Vehiculo.cpp
*/

#include"Vehiculo.h";

Vehiculo::Vehiculo(){}
Vehiculo::Vehiculo(int id,std::string tipo, float costo):id(id), tipo(tipo), costo(costo){}
Vehiculo::~Vehiculo(){}

void Vehiculo::setID(int id) {
	Vehiculo::id=id;
}

void Vehiculo::setTipo(std::string tipo) {
	Vehiculo::tipo=tipo;
}

void Vehiculo::setCosto(float costo) {
	Vehiculo::costo=costo;
}

int Vehiculo::getID() {
	return id;
}

std::string Vehiculo::getTipo() {
	return tipo;
}

float Vehiculo::getCosto() {
	return costo;
}


void Vehiculo::agregarVehiculo(){}

void Vehiculo::eliminarVehiculo(){}

float Vehiculo::costoVehiculo(){}

std::string Vehiculo::datosVehiculo(){}