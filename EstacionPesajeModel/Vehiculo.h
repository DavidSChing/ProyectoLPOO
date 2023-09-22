#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Vehiculo {
        private:
            int codigo;
            int pesoSinCarga;
            int pesoConCarga;
            int pesoActual;
            String^ placa;
            String^ tipoVehiculo;

        public:
            Vehiculo();
            Vehiculo(int codigo, int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo);
    };
}