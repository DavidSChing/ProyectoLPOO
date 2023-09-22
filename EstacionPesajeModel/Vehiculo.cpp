#include "Vehiculo.h"

using namespace EstacionPesajeModel;

Vehiculo::Vehiculo() {

}

Vehiculo::Vehiculo(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo) {
	this->codigo = codigo;
	this->pesoSinCarga = pesoSinCarga;
	this->pesoConCarga = pesoConCarga;
	this->pesoActual = pesoActual;
	this->placa = placa;
	this->tipoVehiculo = tipoVehiculo;
}