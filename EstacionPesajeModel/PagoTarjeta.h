#pragma once

namespace EstacionPesajeModel {

    public ref class PagoTarjeta {
    private:
        int codigo;
        bool estado;

    public:
        PagoTarjeta();
        PagoTarjeta(int codigo, bool estado);
    };
}