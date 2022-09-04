#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "clases.hpp"


using namespace std;

Triangle::Triangle(int x =0, int y =0){
    this -> x = x;
    this -> y = y;
}

void Triangle::setDimension(int dimension){
    this -> dimension = dimension;
}

int Triangle::getDimension(){

    if (dimension<0){
        
        dimension = dimension * -1;
        cout<<"Valor para dimension invalido, se modifico";
    }
    
    return dimension;
}

void Triangle::setX(int x){
    this -> x = x;
}

int Triangle::getX(){
    return this->x;
}

void Triangle::setY(int y){
    this -> y = y;
}

int Triangle::getY(){
    return this->y;
}
void Triangle::draw(){
     char mov;
    
    while ((mov = cin.get()) != 'e'){
        limpiar();
        if (mov == 'w'){
            y--;
        }
        else if (mov == 's')
        {
            y++;
        }
        else if (mov == 'a')
        {
            x--;
        }
        else if(mov == 'd')
        {
            x++;
        }

        int l =0 ;
        while (l < getY())
        {
            cout<< endl;
            l++;
        }

        for (int f = 0; f < getDimension(); f++)
        {
            for (int c = 1; c < getX(); c++)
            {
                cout<<"  ";
            }
            for (int i = 0; i< f; i++)
            {
                cout<<" * ";
            }
            cout<<endl;
        }
        
    }
}

void Square::setDimension(int dimension){
    this -> dimension = dimension;
}

Square::Square(int x =0, int y = 0){
    this-> x = x;
    this->y = y;    
}

int Square::getDimension(){
    
    if (dimension<0){
        dimension = dimension * -1;
        cout<<"Dimension invalida, se modifico";
    }
    if(dimension==0){
        cout<<"Dimension invalida"<<endl;
    }
    
    return this->dimension;
}

void Square::draw(){
    char mov;
    
    while ((mov = cin.get()) != 'e'){
        limpiar();
        if (mov == 'w'){
            y--;
        }
        else if (mov == 's')
        {
            y++;
        }
        else if (mov == 'a')
        {
            x--;
        }
        else if(mov == 'd')
        {
            x++;
        }

        int l =0 ;
        while (l < getY())
        {
            cout<< endl;
            l++;
        }
            
        for (int f = 0; f < getDimension(); f++){
           
            for (int c = 1; c < getX(); c++)
            {
                cout <<"  ";
            }

            for (int i = 0; i < getDimension(); i++)
            {
                if (getTipo() == 1){
                        cout<<" *";

                }
                else{
                    if ((f==0)||(i==0)||(i==dimension-1)||(f==dimension-1)){
                           
                        cout<<"*";

                    }else{

                        cout<<" ";
                    }
                }
            }
        cout<<endl;
        }
            
    }

};      

/*
Circle::Circle(int x = 0, int y = 0){
    this -> x = x;
    this -> y = y;
}*/

/////////////////////////////////////////////////////////////////////
void lienzo(Shape_ *fig1){
    fig1->draw();
    
}

void Square::setTipo(int tipo){
    this -> tipo = tipo;
}

int Square::getTipo(){

    if (tipo !=1 || tipo !=2)
    {
        tipo = 1;
    }
    return tipo;
    
}


void Square::setX(int x){
    this -> x = x;
}

int Square::getX(){
    return this->x;
}

void Square::setY(int y){
    this -> y = y;
}

int Square::getY(){
    return this->y;
}

Menu::Menu(int x = 0, int y=0 , int opc=0){

    this ->x = x;
    this ->y = y;
}

void Menu::correr(){
    int dimension;
        if (opc == 1)
        {
            cout<<"Tipos de Figuras: "<<endl;
            cout<<"1)Relleno\n2)Contorno";
            cout<<endl;
            cout<<"Selecciona una";
            cin>>opc;
            cout<<"Dimension: ";
            cin>>dimension;

            Square fig1 = Square(x, y);
            fig1.setDimension(dimension);
            fig1.setTipo(opc);
            lienzo(&fig1);
            
        }
        if (opc ==2)
        {
            int dimension;
            cout<<"Triangulo"<<endl;
            cout<<"Ingresa dimension: ";
            cin>>dimension;

            Triangle fig1 = Triangle(x, y);
            fig1.setDimension(dimension);
            lienzo(&fig1);
        }

}
 
void Menu::entrada(){

    cout<<"Elige una figura"<<endl;
    cout<<"1)Cuadrado\n2)Triangulo\n3)Circulo"<<endl;
    cin>>opc;

    cout<<"escribe las coordenadas";

    do
    {
        cout<<"Ingrese la coordenada de x: ";
        cin>>x;

    } while (x <= 0);
    do
    {
        
        cout<<"Ingrese la coordenada de y: ";
        cin>>y;

    } while (y <=0);

    
    correr();

}