#include "perimetro.h"

using std::cin;
using std::cout;
using std::endl;

void p_tri(float x){
	cout<<"O perimetro do triangulo é:" << 3*x <<endl;
}

void p_ret(float base, float altura){
	cout << "O perimetro do retangulo é: " << (altura + base)*2 <<endl;
}

void p_quad(float x){
	cout << "O perimetro do quadrado é: " << x*4 << endl;
}

void p_circ(float r){
	cout<<"O perimetro do circulo é: " << PI*2*r<<endl;
}
