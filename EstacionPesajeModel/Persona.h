#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Persona {
        /*Primero definimos los atributos*/
        protected:
            int codigo;
            String^ nombre;
            String^ apellidoPaterno;
            String^ apellidoMaterno;
            String^ dni;

            /*Ahora los métodos*/
        public:
            Persona();
            Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);
    };
}