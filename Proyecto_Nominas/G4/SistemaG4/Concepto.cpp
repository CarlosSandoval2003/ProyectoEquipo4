#include <iostream>

using std::string;

#include <cstring>
#include "Concepto.h"

// constructor predeterminado de DatosCliente
Concepto::Concepto( int valorNumeroCuenta,
   string valorApellido, string valorPrimerNombre,
   double valorSaldo, double valorHoras, double valorPercepciones, double valorDeducciones, double valorSneto )
{
   establecerNumeroCuenta( valorNumeroCuenta );
   establecerApellido( valorApellido );
   establecerPrimerNombre( valorPrimerNombre );
   establecerSaldo( valorSaldo );
   establecerhorastrabajadas (valorHoras);
   establecerPercepciones (valorPercepciones);
   establecerDeducciones(valorDeducciones);
   establecerSueldoneto (valorSneto);

} // fin del constructor de DatosCliente

// obtener el valor del n�mero de cuenta
int DatosCliente::obtenerNumeroCuenta() const
{
   return numeroCuenta;

} // fin de la funci�n obtenerNumeroCuenta

// establecer el valor del n�mero de cuenta
void DatosCliente::establecerNumeroCuenta( int valorNumeroCuenta )
{
   numeroCuenta = valorNumeroCuenta;

} // fin de la funci�n establecerNumeroCuenta

// obtener el valor del apellido
string DatosCliente::obtenerApellido() const
{
   return apellido;

} // fin de la funci�n obtenerApellido

// establecer el valor del apellido
void DatosCliente::establecerApellido( string apellidoString )
{
   // copiar a lo m�s 15 caracteres de la cadena en apellido
   const char *valorApellido = apellidoString.data();
   int longitud = strlen( valorApellido );
   longitud = ( longitud < 15 ? longitud : 14 );
   strncpy( apellido, valorApellido, longitud );

   // anexar caracter nulo al apellido
   apellido[ longitud ] = '\0';

} // fin de la funci�n establecerApellido

// obtener el valor del primer nombre
string DatosCliente::obtenerPrimerNombre() const
{
   return primerNombre;

} // fin de la funci�n obtenerPrimerNombre

// establecer el valor del primer nombre
void DatosCliente::establecerPrimerNombre( string primerNombreString )
{
   // copiar a lo m�s 10 caracteres de la cadena en primerNombre
   const char *valorPrimerNombre = primerNombreString.data();
   int longitud = strlen( valorPrimerNombre );
   longitud = ( longitud < 10 ? longitud : 9 );
   strncpy( primerNombre, valorPrimerNombre, longitud );

   // anexar el caracter nulo a primerNombre
   primerNombre[ longitud ] = '\0';

} // fin de la funci�n establecerPrimerNombre

// obtener el valor del saldo
double DatosCliente::obtenerSaldo() const
{
   return saldo;

} // fin de la funci�n obtenerSaldo

// establecer el valor del balance
void DatosCliente::establecerSaldo( double valorSaldo )
{
   saldo = valorSaldo;

} // fin de la funci�n establecerSaldo
//PARA Horas trabajadas
void Concepto::establecerhorastrabajadas(double valorHoras)
{
    valorSaldo = valorHoras;
}
void Concepto::establecerPercepciones(double valorPercepciones)
{
    valorHoras = valorPercepciones;
}
void Concepto::establecerDeducciones(double valorDeducciones)
{
    valorPercepciones = valorDeducciones;
}
void Concepto::establecerSueldoneto(double valorSneto)
{
    valorDeducciones = valorSneto;
}
