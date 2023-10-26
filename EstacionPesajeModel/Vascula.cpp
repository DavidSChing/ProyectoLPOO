#include "Vascula.h"

using namespace EstacionPesajeModel;

Vascula::Vascula() {

}

Vascula::Vascula(int codigo, int pesoRegistrado) {
	this->codigo = codigo;
	this->pesoRegistrado = pesoRegistrado;
}

int Vascula::getCodigo() {
	return this->codigo;
}
void Vascula::setCodigo(int codigo) {
	this->codigo = codigo;
}

int Vascula::getPesoRegistrado() {
	return this->pesoRegistrado;
}
void Vascula::setPesoRegistrado(int pesoRegistrado) {
	this->pesoRegistrado = pesoRegistrado;
}