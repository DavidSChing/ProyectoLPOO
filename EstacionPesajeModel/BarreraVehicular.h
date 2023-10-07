#pragma once

public ref class BarreraVehicular {
    private: 
        int codigo;
        bool estado;
    
    public:
        BarreraVehicular();
        BarreraVehicular(int codigo, bool estado);
};