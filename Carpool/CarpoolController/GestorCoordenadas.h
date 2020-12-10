#pragma once

using namespace System::Collections::Generic;
using namespace CarpoolModel;

namespace CarpoolController {

	public ref class GestorCoordenadas {

	private:

		ListaCoordenadas^ listaCoordenadas;

		List<ListaCoordenadas^>^ listaListasCoordenadas;
		int Flag;


	public:
		GestorCoordenadas();
		GestorCoordenadas(int flag);
		int GetFlag();
		void incrementarFlag();
		void AgregarParDeCoordenadasAListaCoordenadas(int coordenadaX, int CoordenadaY);
		void AgregarListaCoordenadasAListaDeListasCoordenadas(ListaCoordenadas^ listaCoordenadas);
		ListaCoordenadas^ GiveMeListaCoordenadas();
		//void ConvertirListaCoordenadasEnString(List<Coordenadas^>^ listaGenericaCoordenadas, String^ CadenaDeTexto);
		void saveCoordinatesListAndTripCodeInTxt(int tripCode);
		void leerListaDeListasDeCoordenadasFromTxt();
		ListaCoordenadas^ obtenerListaCoordenadasConCodigo(int codigoViaje);
		//void EliminarLineaDeListaListasCoordenadas(int codigoEliminar);
		//void obtenerFiguraAPartirDeCoordenadasConCodigo(int codigoViaje);



	};
}