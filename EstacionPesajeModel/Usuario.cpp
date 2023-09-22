#include "Usuario.h"

using namespace EstacionPesajeModel;

Usuario::Usuario() : Persona() {

}

Usuario::Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ contrasena, int codigoUsuario) : Persona(codigo,nombre,apellidoPaterno,apellidoMaterno,dni) {
    this->contrasena = contrasena;
    this->codigoUsuario = codigoUsuario;
}