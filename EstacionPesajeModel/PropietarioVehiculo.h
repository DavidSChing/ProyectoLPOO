#pragma once
#include "Persona.h"
#include "Vehiculo.h"

using namespace System;

namespace EstacionPesajeModel {

    public ref class PropietarioVehiculo : Persona {
        private:
            int multasAcumuladas;
            int multaActual;
            Vehiculo^ objVehiculo;

        public:
            PropietarioVehiculo();
            PropietarioVehiculo(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, int multasAcumuladas, int multaActual, Vehiculo^ objVehiculo);
    };
}