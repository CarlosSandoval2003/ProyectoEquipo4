#include<cstdlib>
#include<conio.h>
#include<iostream>

#define USER "Grupo4"
#define PASS "4444"

using namespace std;
#include "Usuarios.h"


Usuarios::Usuarios()
{
    //ctor
}

Usuarios::~Usuarios()
{
    //dtor
}
bool Usuarios::loginUsuarios(){
    string Usuarios, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"**********************"<<endl;
        cout<<" INGRESAR AL SISTEMA "<<endl;
        cout<<"**********************"<<endl;
        cout<<"Ingrese Usuario: ";
        getline(cin, Usuarios);
        cout<<"\nContrasena: ";
        //getline(cin, contra);
        char caracter;
        caracter = getch();
        contra="";
        while (caracter != 13) //ASCII TECLA ENTER
        {
            if (caracter != 8) //ASCII TECLA RETROCESO
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b"; //Efecto caracter borrado en pantalla
                    contra = contra.substr(0,contra.length()-1); //Toma todos los caracteres menos el ultimo
                }
            }
            caracter = getch();
        }
        //instancia de clase USUARIOS, para consultar: primero se consulta el usuario, si existe, se consulta la contrase�a
        if (Usuarios==USER && contra==PASS){
            ingresa=true;

        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;

        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o agoto intentos"<<endl;
        cin.get();
    } else {
        cout<<"\n*** Bienvenido al Sistema ***"<<endl;
        cin.get();
    }
    return ingresa;
}

