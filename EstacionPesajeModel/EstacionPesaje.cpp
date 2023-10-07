#include "EstacionPesaje.h"

using namespace EstacionPesajeModel;


EstacionPesaje::EstacionPesaje() {

}

EstacionPesaje::EstacionPesaje(String^ ubicacion, double latitud, double longitud, List<PantallaLCD^>^ listaPantallaLCD, List<Vascula^>^ listaVascula, List<SensorBarras^>^ listaSensorBarras, List<BarreraVehicular^>^ listaBarreraVehicular, Usuario^ ObjUsuario, PropietarioVehiculo^ objPropietarioVehiculo, PagoTarjeta^ objPagoTarjeta) {
	this->ubicacion = ubicacion;
	this->latitud = latitud;
	this->longitud = longitud;
	this->listaPantallaLCD = listaPantallaLCD;
	this->listaVascula = listaVascula;
	this->listaSensorBarras = listaSensorBarras;
	this->listaBarreraVehicular = listaBarreraVehicular;
	this->ObjUsuario = ObjUsuario;
	this->objPropietarioVehiculo = objPropietarioVehiculo;
	this->objPagoTarjeta = objPagoTarjeta;
}