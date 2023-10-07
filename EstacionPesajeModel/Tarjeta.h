#pragma once

namespace EstacionPesajeModel {

    public ref class Tarjeta {
    private:
        int codigo;
        bool estado;

    public:
        Tarjeta();
        Tarjeta(int codigo, bool estado);
    };
}