#include <iostream>
using namespace std;

class Vehiculo{
	private:
		string numeroPlaca;
		string color;
		string marca;
		int velocimetro;
	public:
		Vehiculo(string, string, string, int); //Constructor
		void mostrarDatos();
		int cambiarVelocidad(int);
		
};

class Automovil :: public Vehiculo{
	private: 
		int cantidadPuertas;
		int cantidadPasajeros;
	
	public:
		Automovil(string, string, string, int, int, int); //Constructor2
		void mostrarAutomovil();
		int subirPasajeros();
		int bajarPasajeros();
};

/*class Camion::public Vehiculo{
	private:
		string carga;
	public:
		Camion(string, string, string, int, float); //Constructor3
		void mostrarCamion();
		void cambiarCarga();
};*/

Vehiculo::Vehiculo(string _numeroPlaca, string _color, string _marca, int _velocimetro){
	numeroPlaca = _numeroPlaca;
	color = _color;
	marca = _marca;
	velocimetro = _velocimetro;
}

Automovil::Automovil(string _numeroPlaca, string _color, string _marca, int _velocimetro, int _cantidadPuertas, int _cantidadPasajeros) : Vehiculo(_numeroPlaca, _color, _marca, _velocimetro){
	cantidadPuertas = _cantidadPuertas;
	cantidadPasajeros = _cantidadPasajeros;
	
}

/*Camion::Camion(string _numeroPlaca, string _color, string _marca, int _velocimetro, string):Vehiculo(){
	carga = _carga;
}*/

void Vehiculo::mostrarDatos(){
	cout << "Numero de Placa: " << numeroPlaca << endl;
	cout << "Color: " << color << endl;
	cout << "Marca de vehciulo: " << marca << endl;
	cout << "Velocimetro actual: " << velocimetro << endl;
	
}

int Vehiculo :: cambiarVelocidad(int veloc){
	velocimetro = veloc;
	
	cout << "Velocimetro cambiado: " << velocimetro << endl;
	return velocimetro;
}

void Automovil :: mostrarAutomovil(){
	mostrarDatos();
	cout << "Cantidad de puertas: " << cantidadPuertas << endl;
	cout << "Cantidad de pasajeros: " << cantidadPasajeros << endl;
	
}

/*int Automovil:: subirPasajeros(){
	
}

int Automovil:: bajarPasajeros(){
	
}*/

/*void Camion :: mostrarCamion(){
	mostrarDatos();
	cout << "Carga: " << carga << endl;
	
}*/

/*void Camion :: cambiarCarga(){
	
}*/

int main(){
	Vehiculo vehiculo1(" 123D10 ", "Amarillo", "Nissan", 90);
	vehiculo1.mostrarDatos();
	
	vehiculo1.cambiarVelocidad(100);
	
	return 0;
}