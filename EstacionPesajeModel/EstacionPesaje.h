#pragma once
#include "PantallaLCD.h"
#include "Vascula.h"
#include "SensorBarras.h"
#include "BarreraVehicular.h"

#include "Usuario.h"
#include "PropietarioVehiculo.h"
#include "Tarjeta.h"

using namespace System;
using namespace System::Collections::Generic;

namespace EstacionPesajeModel {

    public ref class EstacionPesaje {
    private:
        int codigo;
        String^ ubicacion;
        double latitud;
        double longitud;

        List<PantallaLCD^>^ listaPantallaLCD; //Así se representa la composición o agregación
        List<Vascula^>^ listaVascula;
        List<SensorBarras^>^ listaSensorBarras;
        List<BarreraVehicular^>^ listaBarreraVehicular;

        Usuario^ ObjUsuario;
        PropietarioVehiculo^ objPropietarioVehiculo;
        Tarjeta^ objTarjeta;

        //Siempre hay 2 constructores, uno vacío y otro con todo
    public:
        EstacionPesaje();
        EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, Tarjeta^ objTarjeta);
        EstacionPesaje(int codigo, String^ ubicacion, double latitud, double longitud);

        int getCodigo();
        void setCodigo(int codigo);

        String^ getUbicacion();
        void setUbicacion(String^ ubicacion);
        
        double getLatitud();
        void setLatitud(double latitud);

        double getLongitud();
        void setLongitud(double longitud);

        List<PantallaLCD^>^ getListaPantallaLCD();
        void setListaPantallaLCD(List<PantallaLCD^>^ lista);

        List<Vascula^>^ getListaVascula();
        void setListaVascula(List<Vascula^>^ lista);

        List<SensorBarras^>^ getListaSensorBarras();
        void setListaSensorBarras(List<SensorBarras^>^ lista);

        List<BarreraVehicular^>^ getListaBarreraVehicular();
        void setListaBarreraVehicular(List<BarreraVehicular^>^ lista);
    };
}