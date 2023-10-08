#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {

	public ref class EstacionController {
		public:
			EstacionController();
			List<EstacionPesaje^>^ buscarEstacionPesaje(String^ ubicacion);
			/*Estos métodos siempre deberían estar porque te sirven mucho*/
			List<EstacionPesaje^>^ buscarAll();
			void escribirArchivo(List<EstacionPesaje^>^ listaEstacionPesaje);
			void eliminarEstacionFisico(int codigo);
			void agregarEstacionPesaje(EstacionPesaje^ objEstacionPesaje);
			EstacionPesaje^ buscarEstacionxCodigo(int codigo);
			void actualizarEstacionPesaje(EstacionPesaje^ objEstacionPesaje); /*Se procede a implementarlo en controller.cpp*/
			List<String^>^ obtenerUbicacion(); /*Se crea una lista de Strings que sean las ubicaciones que apareceran en el TextBox del criterio de Busqueda*/
	};

}