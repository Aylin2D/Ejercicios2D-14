#include <iostream>
#include <cmath>
using namespace std;

void areaCirculo ( void );
void areaCuadrado ( void );
void areaRectangulo ( void );
void areaTriangulo ( void );
void mostrarArea ( float area );

const float pi = 3.14154;

int main () {
	
	char opcion;
	cout << "Selecciona el area que deseas calcular" << endl;
	cout << "a) Circulo\n  b) Cuadrado\n  c) Rectangulo\n  d) Triangulo\n"; 
	cin >> opcion;
	
	switch ( opcion ) {
		
		case 'a' : areaCirculo () ; break;
		case 'b' : areaCuadrado () ; break;
		case 'c' : areaRectangulo () ; break;
		case 'd' : areaTriangulo () ; break;
		
	}
	
	return 0;
}

void mostrarArea ( float area ) {
	
	cout << "El area es: " << area << endl;
	return;
	
}

void areaCirculo ( void ) {
	
	float radio, area = 0;
	cout << "Ingresa el radio: "; 
	cin >> radio;
	area = pow( radio, 2 ) * pi;
	mostrarArea ( area );
	return;
	
}

void areaCuadrado ( void ) {
	
	float lado, area = 0;
	cout << "Ingresa un lado: "; 
	cin >> lado;
	area = pow( lado, 2 );
	mostrarArea ( area );
	return;
	
}

void areaRectangulo ( void ) {
	
	float base, altura, area = 0;
	cout << "Ingresa la base: "; 
	cin >> base;
	cout << "Ingresa la altura: ";
	cin >> altura;
	area = base * altura;
	mostrarArea ( area );
	return;
	
}

void areaTriangulo ( void ) {
	
	float base, altura, area = 0;
	cout << "Ingresa la base: "; 
	cin >> base;
	cout << "Ingresa la altura: ";
	cin >> altura;
	area = (base * altura) / 2;
	mostrarArea ( area );
	return;
	
}
