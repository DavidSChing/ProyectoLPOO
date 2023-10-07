#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class SensorBarras {
        private:
            int codigo;
            String^ lecturaNumero;

        public:
            SensorBarras();
            SensorBarras(int codigo, String^ lecturaNumero);
    };
}