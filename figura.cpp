/*2. CREAR CLASE PADRE FIGURA Y LAS CLASES HIJAS CIRCULO, RECTANGULO Y TRIANGULO. SE PIDE IMPLEMENTAR EL DIAGRAMA DE CLASES CON LOS CONSTRUCTORES
Y FUNCIONES MIEMBRO NECESARIOS PARA CADA CLASE E IMPLEMENTAR UN PROGRAMA*/

#include <iostream>
using namespace std;

class Figura{
	private://atributos
		string color;
	
	public://metodos
		Figura(string);//Constructor1
		void mostrarDatos();
};

class Circulo : public Figura{
	private://atributos
		double radio;
	
	public://metodos
		Circulo(string, double);//Constructor2
		double calcularArea();
		double calcularPerimetro();
};

class Rectangulo : public Figura{
	private:
		double base;
		double altura;
	
	public:
		Rectangulo(string, double, double);//Constructor3
		double calcularArea();
		
};

class Triangulo : public Figura{
	private:
		double base;
		double altura;
		string tipo;
	
	public:
		Triangulo(string, double, double, string);//Constructor4
		double calcularArea();
	
};

Figura :: Figura(string _color){
	color = _color;
}

Circulo::Circulo(string _color, double _radio):Figura(_color){
	radio = _radio;
}

Rectangulo :: Rectangulo(string _color, double _base, double _altura) : Figura(_color){
	base = _base;
	altura = _altura;
	
}

Triangulo::Triangulo(string _color, double _base, double _altura, string _tipo):Figura(_color){
	base = _base;
	altura = _altura;
	tipo = _tipo;
}

void Figura::mostrarDatos(){
	cout << "Color: " << color << endl;
}


double Circulo::calcularArea(){
	mostrarDatos();
	
	double area;
	
	area = 3.14 * radio * radio;
	
	cout << "El area del circulo es: " << area << endl;
	return area;
}

double Circulo::calcularPerimetro(){
	double perimetro;
	perimetro = 2*3.14*radio;
	
	cout << "El perimetro del circulo es: " << perimetro << endl;
	return perimetro;
}

double Rectangulo::calcularArea(){
	mostrarDatos();
	double area;
	area = base * altura;
	
	cout << "Area: " << area << endl;
	return area;
}

double Triangulo::calcularArea(){
	mostrarDatos();
	double area;
	area = (base * altura)/2;
		
	cout << "Area: " << area << endl;
	return area;
}

int main(){
	cout << "Circulo: " << endl;
	Circulo circulo1("Azul", 3);
	circulo1.calcularArea();
	circulo1.calcularPerimetro();
	
	cout << endl;
	
	cout << "Rectangulo: " << endl;
	Rectangulo rectangulo1("Rojo", 10, 4.2);
	rectangulo1.calcularArea();
	
	cout << endl;
	
	cout << "Triangulo: " << endl;
	Triangulo triangulo1("Verde", 10, 6, "Isosceles");
	triangulo1.calcularArea();
	
	system("pause");
	return 0;
}
