#include "PagoTarjeta.h"

using namespace EstacionPesajeModel;

PagoTarjeta::PagoTarjeta() {

}

PagoTarjeta::PagoTarjeta(int codigo, bool estado) {
	this->codigo = codigo;
	this->estado = estado;
}