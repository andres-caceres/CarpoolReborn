#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;

namespace CarpoolController {

	public ref class GestorCoordenadas {

	private:
		List<Coordenadas^>^ listaCoordenadas;

		List<List<Coordenadas^>^>^ listaListasCoordenadas;


	public:
		GestorCoordenadas();
		void AgregarParDeCoordenadasAListaCoordenadas(int coordenadaX, int CoordenadaY);
		void AgregarListaCoordenadasAListaDeListasCoordenadas(List<Coordenadas^>^ listaCoordenadas);
		List<Coordenadas^>^ GiveMeListaCoordenadas();
		//void ConvertirListaCoordenadasEnString(List<Coordenadas^>^ listaGenericaCoordenadas, String^ CadenaDeTexto);
		void saveCoordinatesListAndTripCodeInTxt(int tripCode);
		//void readCoordinatesListFromTxt();


	};
}