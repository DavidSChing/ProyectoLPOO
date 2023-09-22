#include "SensorBarras.h"

using namespace EstacionPesajeModel;

SensorBarras::SensorBarras() {

}

SensorBarras::SensorBarras(int codigo, String^ lecturaNumero) {
	this->codigo = codigo;
	this->lecturaNumero = lecturaNumero;
}