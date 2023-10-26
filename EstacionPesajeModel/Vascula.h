#pragma once

namespace EstacionPesajeModel {

    public ref class Vascula {
    private:
        int codigo;
        int pesoRegistrado;

    public:
        Vascula();
        Vascula(int codigo, int pesoRegistrado);
        
        int getCodigo();
        void setCodigo(int codigo);

        int getPesoRegistrado();
        void setPesoRegistrado(int pesoRegistrado);
    };  
}