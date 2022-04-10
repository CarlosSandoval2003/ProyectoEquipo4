#ifndef CONCEPTO_H
#define CONCEPTO_H
#include <iostream>

class Concepto {

    public:
    // constructor predeterminado de DatosCliente constructor
   DatosCliente( int = 0, string = "", string = "", double = 0.0, double = 0.0, double = 0.0, double = 0.0, double = 0.0 );

   // funciones de acceso para numeroCuenta
   void establecerNumeroCuenta( int );
   int obtenerNumeroCuenta() const;

   // funciones de acceso para apellido
   void establecerApellido( string );
   string obtenerApellido() const;

   // funciones de acceso para primerNombre
   void establecerPrimerNombre( string );
   string obtenerPrimerNombre() const;

   // funciones de acceso para el saldo
   void establecerSaldo( double );
   double obtenerSaldo() const;
   //Para sueldo Bruto
   void establecerhorastrabajadas (double);
   double obtenerhorastrabajadas() const;
   // PARA Percepciones
   void establecerPercepciones (double);
   double obtenerPercepciones() const;
   // PARA DEDUCCIONES
   void establecerDeducciones (double);
   double obtenerDeducciones () const;
   // PARA Sueldo Neto
   void establecerSueldoneto (double);
   double obtenerSueldoneto() const;


private:
   int numeroCuenta;
   char apellido[ 15 ];
   char primerNombre[ 10 ];
   double saldo;
   double sueldobruto;
   double percepciones;
   double deducciones;
   double sueldoneto;


};

#endif // CONCEPTO_H
