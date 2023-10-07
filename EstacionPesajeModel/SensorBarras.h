#pragma once

using namespace System;

public ref class SensorBarras {
    private:
        int codigo;
        String^ lecturaNumero;
    
    public:
        SensorBarras();
        SensorBarras(int codigo, String^ lecturaNumero);
};