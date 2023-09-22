#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeController;

namespace EstacionPesajeController {

	public ref class EstacionPesajeController {
		
		public:
			EstacionPesajeController(int codigo, String^ ubicacion, double latitud, double longitud);
			EstacionPesajeController();
	};
}