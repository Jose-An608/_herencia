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

class Automovil : public Vehiculo{
	private: 
		int cantidadPuertas;
		int cantidadPasajeros;
	
	public:
		Automovil(string, string, string, int, int, int); //Constructor2
		void mostrarAutomovil();
		int subirPasajeros(int);
		int bajarPasajeros(int);
};

class Camion : public Vehiculo{
	private:
		string carga;
	public:
		Camion(string, string, string, int, string); //Constructor3
		void mostrarCamion();
		void cambiarCarga(string);
};

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

Camion::Camion(string _numeroPlaca, string _color, string _marca, int _velocimetro, string _carga) : Vehiculo(_numeroPlaca, _color, _marca, _velocimetro){
	carga = _carga;
}

void Vehiculo::mostrarDatos(){
	cout << "Numero de Placa: " << numeroPlaca << endl;
	cout << "Color: " << color << endl;
	cout << "Marca de vehiculo: " << marca << endl;
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

int Automovil:: subirPasajeros(int n_Pasajeros){
	int capMax=20;
	
	if(cantidadPasajeros + n_Pasajeros <= capMax){
		cantidadPasajeros = cantidadPasajeros + n_Pasajeros;
		cout << "Pasajeros aniadidos exitosamente. Hay un total de " << cantidadPasajeros << endl;
		return cantidadPasajeros;
	}else{
		cout << "Se ha excedido con la capacidad maxima. No pueden subir" << n_Pasajeros << "pasajeros" << endl; 
		return cantidadPasajeros;
	}
}

int Automovil:: bajarPasajeros(int n_pasajerosBajados){
	
	if(n_pasajerosBajados <= cantidadPasajeros){
		cantidadPasajeros = cantidadPasajeros - n_pasajerosBajados;
		cout << "Han bajado " << n_pasajerosBajados << ". Quedarian un total de " << cantidadPasajeros << " pasajeros " << endl;
		return cantidadPasajeros;
	}else{
		cout << "No se puede bajar " << n_pasajerosBajados << " ya que excede la cantidad actual de " << cantidadPasajeros << " pasajeros " << endl;
		return cantidadPasajeros;
	}
	
}

void Camion :: mostrarCamion(){
	mostrarDatos();
	cout << "Carga: " << carga << endl;
	
}

void Camion :: cambiarCarga(string n_carga){
	carga = n_carga;
	
	cout << "La nueva carga seria: " << carga << endl;
}

int main(){
	
	cout << "Datos del Vehiculo: " << endl;
	Vehiculo vehiculo1("123D10 ", "Amarillo", "Nissan", 90);
	vehiculo1.mostrarDatos();
	vehiculo1.cambiarVelocidad(100);
	
	cout << endl;
	
	cout << "Datos del automovil: " << endl;
	Automovil automovil1("21DE12", " Rojo", "Chevrolet", 90, 2, 15);
	automovil1.mostrarAutomovil();
	automovil1.subirPasajeros(3); //añadiendo 3 pasajeros
	automovil1.bajarPasajeros(2); //bajando 2 pasajeros	
	
	cout << endl;
	
	cout << "Datos del camion: " << endl;
	Camion camion1("34UD14", "Negro", "Volvo", 100, "Frutas");
	camion1.mostrarCamion();
	cout << endl;
	camion1.cambiarCarga("Hortalizas");
	cout << endl;
	cout << "Mostrando datos del camion con la carga actualizada: " << endl;
	camion1.mostrarCamion();
	
	system("pause");

	return 0;
}
