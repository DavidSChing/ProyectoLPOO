#pragma once

using namespace System;

public ref class Persona {
    /*Primero definimos los atributos*/
    protected:
        int codigo;
        String^ nombre;
        String^ apellidoPaterno;
        String^ apellidoMaterno;
        String^ dni;
    
    /*Ahora los m�todos*/
    public:
        Persona();
        Persona(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);
};