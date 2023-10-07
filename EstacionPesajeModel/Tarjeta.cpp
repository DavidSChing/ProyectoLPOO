#include "Tarjeta.h"

using namespace EstacionPesajeModel;

Tarjeta::Tarjeta() {

}

Tarjeta::Tarjeta(int codigo, bool estado) {
	this->codigo = codigo;
	this->estado = estado;
}