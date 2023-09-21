#include "SensorBarras.h"

SensorBarras::SensorBarras() {

}

SensorBarras::SensorBarras(int codigo, String^ lecturaNumero) {
	this->codigo = codigo;
	this->lecturaNumero = lecturaNumero;
}