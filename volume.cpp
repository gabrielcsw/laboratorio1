#include "volume.h"

using std::cin;
using std::cout;
using std::endl;

void v_piramide(float aresta, float altura){
	cout<<"O volume da piramide eh: " <<(aresta*aresta*altura)/3<<endl;
}

void v_cubo(float aresta){
	cout<<"O volume da piramide eh: "<<pow(aresta, 3) <<endl;
}

void v_para(float altura, float largura, float profundidade){
	cout<<"O volume do paralelepipedo eh: " <<altura*largura*profundidade <<endl;
}

void v_esf(float raio){
	cout<<"O volume da esfera eh: "<< PI*(pow(raio, 3))*(4/3)<<endl;
}

