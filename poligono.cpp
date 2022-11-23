#include <iostream>

using namespace std;

class Poligono{
    private:
        int cantidadVertices;
        float area;
        float perimetro;
    public: 
        Poligono(int, float, float);
        void calcularArea();
        void setCantidadVertices(int);
        void setArea(float);
        void setPerimetro(float);
        int getCantidadVertices();
        float getArea();
        float getPerimetro();
};

Poligono::Poligono(int _cantidadVertices, float _area, float _perimetro){
    cantidadVertices = _cantidadVertices;
    area = _area;
    perimetro = _perimetro;
};
void Poligono::setCantidadVertices(int _cantidadVertices){
    cantidadVertices = _cantidadVertices;
};
void Poligono::setArea(float _area){
    area = _area;
};
void Poligono::setPerimetro(float _perimetro){
    perimetro = _perimetro;
};

int Poligono::getCantidadVertices(){
    return cantidadVertices;
};

float Poligono::getArea(){
    return area;
};

float Poligono::getPerimetro(){
    return perimetro;
};

void Poligono::calcularArea(){
    int paso=1;

    if(cantidadVertices>2){
        while(paso<=cantidadVertices){
            printf("Ingresa el valor para (x%d,y%d): ",paso);
            scanf("%lf %lf");
            /* Como vamos a calcular el area
                x1  y1
                x2  y2 
                x3  y3 
                x4  y4
                x1  y1 
            Multiplicamos por diagonales y luego dividimos en 2*/


            
            paso++;
        }
    }
    else{
        printf("El poligono debe de tener más de dos vertices");
    };
}