#include "PagoTarjeta.h"

PagoTarjeta::PagoTarjeta() {

}

PagoTarjeta::PagoTarjeta(int codigo, bool estado) {
	this->codigo = codigo;
	this->estado = estado;
}