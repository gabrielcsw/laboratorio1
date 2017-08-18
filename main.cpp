#include <iostream>
#include <cmath>
#include "area.cpp"
#include "calcula.cpp"
#include "perimetro.cpp"
#include "volume.cpp"

using std::cin;
using std::cout;
using std::endl;

void main(){
    int opcao=0;
do{
    cout<<"Calculadora de Geometria Plana e Espacial" <<endl;
    cout<<"(1) Triangulo equilatero"<<endl;
    cout<<"(2) Retangulo"<<endl;
    cout<<"(3) Quadrado"<<endl;
    cout<<"(4) Circulo"<<endl;
    cout<<"(5) Piramide de base quadrangular"<<endl;
    cout<<"(6) Cubo"<<endl;
    cout<<"(7) Paralelepipedo"<<endl;
    cout<<"(8) Esfera"<<endl;
    cout<<"(0) Sair"<<endl;
    cout<<"Selecione sua opcao:"<<endl;
    cin>>opcao;

    switch(opcao){
        case 1:
            system("clear");
            float tri = lado();
            a_tri(tri);
            p_tri(tri);
            break;
       case 2:
           system("clear");
           float b = base();
           float a = altura();
           p_ret(b,a);
           a_ret(b,a);
           break;

        case 3:
            system("clear");
            float b = base();
            p_quad(b);
            a_quad(b);
            break;

        case 4:
            system("clear");
            float r = raio();
            p_circ(r);
            a_circ(r);
            break;

        case 5:
            system("clear");
            float b = lado();
            float a = altura();
            a_piramide(b,a);
            v_piramide(b,a);
            break;

        case 6:
            system("clear");
            float b = lado();
            a_cubo(b);
            v_cubo(b);
            break;

        case 7:
            system("clear");
            float a = a_larg();
            float b = a_alt();
            float c = a_prof();
            a_para(b,a,c);
            v_para(b,a,c);
            break;

        case 8:
            system("clear");
            float r = raio();
            a_esfera(r);
            v_esf(r);
            break;

        case 0:
            cout<<"Hasta la vista..."<< endl;
            return 0;
    }
}while(opcao!=0 && opcao<9);
    return 0;
}
