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
	};

}