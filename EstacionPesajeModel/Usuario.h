#pragma once
#include "Persona.h"

using namespace System;

namespace EstacionPesajeModel {

    //Para representar la herencia se hace a traves de los : (dos puntos)
    public ref class Usuario : Persona {
        private:
            String^ contrasena;
            int codigoUsuario;

        public:
            Usuario();
            Usuario(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ contrasena, int codigoUsuario);
    };
}