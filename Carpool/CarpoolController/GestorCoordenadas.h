#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;

namespace CarpoolController {

	public ref class GestorCoordenadas {

	private:

		ListaCoordenadas^ listaCoordenadas;

		List<ListaCoordenadas^>^ listaListasCoordenadas;


	public:
		GestorCoordenadas();
		void AgregarParDeCoordenadasAListaCoordenadas(int coordenadaX, int CoordenadaY);
		void AgregarListaCoordenadasAListaDeListasCoordenadas(ListaCoordenadas^ listaCoordenadas);
		ListaCoordenadas^ GiveMeListaCoordenadas();
		//void ConvertirListaCoordenadasEnString(List<Coordenadas^>^ listaGenericaCoordenadas, String^ CadenaDeTexto);
		void saveCoordinatesListAndTripCodeInTxt(int tripCode);
		void leerListaDeListasDeCoordenadasFromTxt();


	};
}