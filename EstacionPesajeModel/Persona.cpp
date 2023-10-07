#include "Persona.h"

Persona::Persona() {

}

Persona::Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni) {
	this->codigo = codigo;
    this->nombre = nombre;
    this->apellidoPaterno = apellidoPaterno;
    this->apellidoMaterno = apellidoMaterno;
    this->dni = dni;    
}