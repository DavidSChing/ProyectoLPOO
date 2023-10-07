#pragma once

namespace EstacionPesajeModel {

    public ref class Vascula {
    private:
        int codigo;
        int pesoRegistrado;

    public:
        Vascula();
        Vascula(int codigo, int pesoRegistrado);
    };
}