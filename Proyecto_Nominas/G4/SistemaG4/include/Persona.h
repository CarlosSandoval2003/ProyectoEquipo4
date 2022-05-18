#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include<conio.h>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <fstream>

using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cstdlib>
using namespace std;

class Persona {

public:

   // constructor clase Persona
   Persona( int = 0, string = "", string = "", string = "", string = "", string = "", string = "", string = "", string = "");

   // Funciones para obtener el ID
   void establecerId( int );
   int obtenerNumeroId() const;

   // Funciones para acceder a los datos privados
   void establecerApellido( string );
   string obtenerApellido() const;

   void establecerPrimerNombre( string );
   string obtenerPrimerNombre() const;

   void establecerTelefono( string );
   string obtenerTelefono() const;

   void establecerDpi( string );
   string obtenerDpi() const;

   void establecerEmail( string );
   string obtenerEmail() const;

   void establecerDireccion( string );
   string obtenerDireccion() const;

   void establecerGenero( string );
   string obtenerGenero() const;

   void establecerDepartamento( string );
   string obtenerDepartamento() const;


   //Funciones para el tratado de archivos
    void imprimirRegistro( fstream& );
    void actualizarRegistro( fstream& );
    void nuevoRegistro( fstream& );
    void eliminarRegistro( fstream& );
    void mostrarLinea( ostream&, const Persona & );
    int obtenerId( const char * const );
    void crearArchivoEmpleados();
    void consultarRegistro( fstream& );
    void busquedaRegistro(fstream&);
    void mostrarLineaPantalla( const Persona &);
    fstream inicioArchivo();





private:
   int numeroId;
   char apellido[ 15 ];
   char primerNombre[ 10 ];
   char telefono[ 9 ];
   char dpi [ 14 ];
   char email[31];
   char direccion[3];
   char departamento[21];
   char genero[2];

};

#endif

