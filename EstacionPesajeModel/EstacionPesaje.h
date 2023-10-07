#pragma once
#include "PantallaLCD.h"
#include "Vascula.h"
#include "SensorBarras.h"
#include "BarreraVehicular.h"

#include "Usuario.h"
#include "PropietarioVehiculo.h"
#include "PagoTarjeta.h"

using namespace System;
using namespace System::Collections::Generic;

namespace EstacionPesajeModel {

    public ref class EstacionPesaje {
        private:
            String^ ubicacion;
            double latitud;
            double longitud;
            List<PantallaLCD^>^ listaPantallaLCD; //Así se representa la composición o agregación
            List<Vascula^>^ listaVascula;
            List<SensorBarras^>^ listaSensorBarras;
            List<BarreraVehicular^>^ listaBarreraVehicular;

            Usuario^ ObjUsuario;
            PropietarioVehiculo^ objPropietarioVehiculo;
            PagoTarjeta^ objPagoTarjeta;

        public:
            EstacionPesaje();
            EstacionPesaje(String^ ubicacion, double latitud, double longitud, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, PagoTarjeta^ objPagoTarjeta);
    };
}