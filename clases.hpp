
#include <iostream>

using namespace std;


void limpiar(){
    cout<< "\x1B[2J\x1B[H";
}
class Shape_{

public:
virtual void draw()=0;

};

class Square : public Shape_{

private:
    int dimension, x, y;
    int tipo;

public:
    Square(int, int);
    void setDimension(int);
    int  getDimension();
    void setTipo(int);
    int getTipo();
    void setX(int);
    int  getX();
        void setY(int);
    int  getY();
    void draw();

};

class Triangle : public Shape_{
private:
    int dimension, x, y;
public:
    Triangle(int, int);
    void setDimension(int);
    int  getDimension();
    void setX(int);
    int  getX();
    void setY(int);
    int  getY();
    void draw();

      
};
/*
class Circle : public Shape_{

private: 
    int diametro, x, y;

public:
    Circle(int, int);
    void setDiametro(int);
    int getDiametro();
    void draw();
};*/

class Menu
{
private:
    int x, y, opc;
public:
    Menu(int, int, int);
    void entrada();
    void correr();
    
};

