#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class Vehiculo {
    private:
        int pesoSinCarga;
        int pesoConCarga;
        int pesoActual;
        String^ placa;
        String^ tipoVehiculo;

    public:
        Vehiculo();
        Vehiculo(int pesoSinCarga, int pesoConCarga, int pesoActual, String^ placa, String^ tipoVehiculo);
    };
}