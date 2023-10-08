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
	for each (String ^ lineaEstacionPesaje in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaEstacionPesaje->Split(separadores->ToCharArray());

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

List<EstacionPesaje^>^ EstacionController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<EstacionPesaje^>^ listaEstacionPesajeEncontrados = gcnew List<EstacionPesaje^>();
	array<String^>^ lineas = File::ReadAllLines("EstacionPesaje.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*Esta instruccion for each nos permite ir elemento por elemento de un array*/
	for each (String ^ lineaEstacionPesaje in lineas) {
		/*Voy a separar cada elemento del String por ; con el split*/
		array<String^>^ datos = lineaEstacionPesaje->Split(separadores->ToCharArray());

		int codigoEstacionPesaje = Convert::ToInt32(datos[0]);
		String^ ubicacionEstacionPesaje = datos[1];
		double latitudEstacionPesaje = Convert::ToDouble(datos[2]);
		double longitudEstacionPesaje = Convert::ToDouble(datos[3]);

		EstacionPesaje^ objEstacionPesaje = gcnew EstacionPesaje(codigoEstacionPesaje, ubicacionEstacionPesaje, latitudEstacionPesaje, longitudEstacionPesaje);
		listaEstacionPesajeEncontrados->Add(objEstacionPesaje);
		
	}
	return listaEstacionPesajeEncontrados;
}

void EstacionController::escribirArchivo(List<EstacionPesaje^>^ lista) {
	array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);
	for (int i = 0; i < lista->Count; i++) {
		EstacionPesaje^ objeto = lista[i];
		lineasArchivo[i] = objeto->getCodigo() + ";" + objeto->getUbicacion() + ";" + objeto->getLatitud() + ";" + objeto->getLongitud();
	}
	File::WriteAllLines("EstacionPesaje.txt", lineasArchivo);
}

void EstacionController::eliminarEstacionFisico(int codigo) {
	List<EstacionPesaje^>^ listaEstacionPesaje = buscarAll();
	for (int i = 0; i < listaEstacionPesaje->Count; i++) {
		/*encontrar*/
		if (listaEstacionPesaje[i]->getCodigo() == codigo) {
			listaEstacionPesaje->RemoveAt(i);
		}
	}
	escribirArchivo(listaEstacionPesaje);
}

void EstacionController::agregarEstacionPesaje(EstacionPesaje^ objEstacionPesaje) {
	List<EstacionPesaje^>^ listaEstacionPesaje = buscarAll();
	listaEstacionPesaje->Add(objEstacionPesaje);
	escribirArchivo(listaEstacionPesaje);
}

EstacionPesaje^ EstacionController::buscarEstacionxCodigo(int codigo) {
	List<EstacionPesaje^>^ listaEstacionPesaje = buscarAll();
	for (int i = 0; i < listaEstacionPesaje->Count; i++) {
		if (listaEstacionPesaje[i]->getCodigo() == codigo) {
			return listaEstacionPesaje[i];
		}
	}
}

void EstacionController::actualizarEstacionPesaje(EstacionPesaje^ objEstacionPesaje) {
	List<EstacionPesaje^>^ listaEstacionPesaje = buscarAll(); //Se cargan todas las estaciones
	for (int i = 0; i < listaEstacionPesaje->Count; i++) { //Voy estacion por estacion
		if (listaEstacionPesaje[i]->getCodigo() == objEstacionPesaje->getCodigo()) { //Si el codigo de la estacion que saco de la lista es igual al codigo de la estacion objEstacionPesaje
			/*Voy a actualizar cada dato de esa estacion en la lista*/
			listaEstacionPesaje[i]->setUbicacion(objEstacionPesaje->getUbicacion());
			listaEstacionPesaje[i]->setLatitud(objEstacionPesaje->getLatitud());
			listaEstacionPesaje[i]->setLongitud(objEstacionPesaje->getLongitud());
			break;
		}
	}
	escribirArchivo(listaEstacionPesaje);
}/*Una vez finalizado esta parte, se dirige a frmEditarEstacionPesaje a culminar la parte de codigo del boton eliminar*/