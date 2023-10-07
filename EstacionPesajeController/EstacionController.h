#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace EstacionPesajeModel;

namespace EstacionPesajeController {
	public ref class EstacionController {
		public:
			EstacionController();
			List<EstacionPesaje^>^ buscarEstacionPesaje(String^ ubicacion);

	};
}