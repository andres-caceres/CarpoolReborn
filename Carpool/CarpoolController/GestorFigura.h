#pragma once

using namespace CarpoolModel;
using namespace System::Collections::Generic;

namespace CarpoolController {

	public ref class GestorFigura {

	private:
		List<figura^>^ listaFiguras;
	public:
		GestorFigura();
		void AgregarFigura(figura^ objFigura);
		int obtenerCantidadFiguras();
		figura^ obtenerFiguraxIndice(int indice);

	};
}

