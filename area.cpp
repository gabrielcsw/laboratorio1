#include "area.h"
#define PI 3.1415

using std::cin;
using std::cout;
using std::endl;

void a_tri(float lado){
    cout<<"A area do triangulo eh:"<< ((pow(lado, 2))*sqrt(3))/4<<endl;
}
void a_ret(float base, float altura) {
	cout << "A area do retângulo eh: " << base*altura <<endl;
}
void a_quad(float lado){
    cout<<"A area do quadrado eh: "<<pow(lado, 2)<<endl;
}
void a_circ(float raio){
	cout << "A area do circulo eh:" << PI*pow(raio,2)<<endl;
}
void a_piramide(float aresta, float altura){
    float faceq = pow(aresta, 2);
    float arestat= sqrt((pow(altura, 2)+ 2*pow(aresta,2)));
    float facet = (arestat*sqrt(3));
    cout<<"A area das faces da piramide eh: "<<facet + faceq<<endl;
}
void a_cubo(float aresta){
	cout << "A area do cubo eh: " << 6*aresta <<endl;
}
void a_para(float altura, float largura, float profundidade){
    cout<<"O valor da area do paralelepipedo eh: "<<(2*(altura*largura))+(2*(largura*profundidade)) + (2*(altura*profundidade))<<endl;
}
void a_esfera(float raio){
	float raio;
	cout << "A area da esfera eh: " << 4*PI*raio << endl;
}
