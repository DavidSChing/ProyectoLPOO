#pragma once

using namespace System;

namespace EstacionPesajeModel {

    public ref class PantallaLCD {
        private:
            int codigo;
            String^ mensaje;

        public:
            PantallaLCD();
            PantallaLCD(int codigo, String^ mensaje);
    };
}