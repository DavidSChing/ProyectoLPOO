#include "BarreraVehicular.h"

using namespace EstacionPesajeModel;

BarreraVehicular::BarreraVehicular() {

}

BarreraVehicular::BarreraVehicular(int codigo, bool estado) {
	this->codigo = codigo;
	this->estado = estado;
}