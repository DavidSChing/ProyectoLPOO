#include "PantallaLCD.h"

PantallaLCD::PantallaLCD() {

}

PantallaLCD::PantallaLCD(int codigo, String^ mensaje) {
	this->codigo = codigo;
	this->mensaje = mensaje;
}