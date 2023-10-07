#include <iostream>
#include "EstacionController.h"

using namespace EstacionPesajeController;
using namespace System::IO; /*Este espacio de nombres sirve para manejar los archivos de texto*/


EstacionController::EstacionController() {

}

List<EstacionPesaje^>^ EstacionController::buscarEstacionPesaje(String^ ubicacion) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<EstacionPesaje^>^ listaEstacionPesajeEncontrados = gcnew List<EstacionPesaje^>();
	array<String^>^ lineas = File::ReadAllLines("EstacionPesaje.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaCarrera in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());

		int codigoEstacionPesaje = Convert::ToInt32(datos[0]);
		String^ ubicacionEstacionPesaje = datos[1];
		double latitudEstacionPesaje = Convert::ToDouble(datos[2]);
		double longitudEstacionPesaje = Convert::ToDouble(datos[3]);

		if (ubicacionEstacionPesaje->Contains(ubicacion)) {
			EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje);
			listaEstacionPesajeEncontrados->Add(objEstacionPesaje);
		}
	}
	return listaEstacionPesajeEncontrados;
}