
#include "Videojuego.h"


Videojuego :: Videojuego(string nombre,string descripcion,string nombreEmpresa,float costoMensual,float costoTrimestral,float costoAnual,float costoVitalicia){
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->nombreEmpresa = nombreEmpresa;
    this->costoMensual = costoMensual;
    this->costoTrimestral = costoTrimestral;
    this->costoAnual = costoAnual;
    this->costoVitalicia = costoVitalicia;
}

string Videojuego :: getnombre(){
    return this->nombre;
}

string Videojuego :: getdescripcion(){
    return this->descrepcion;
}

string Videojuego :: getnombreEmpresa(){
    return this->nombreEmpresa;
}

float Videojuego :: getcostoMensual(){
    return this->costoMensual;
}

float Videojuego :: getcostoTrimestral(){
    return this->costoTrimestral;
}

float Videojuego :: getcostoAnual(){
    return this->costoAnual;
}

float Videojuego :: getcostoVitalicia(){
    return this->costoVitalicia;
}

void Videojuego :: setnombre(string nombre){
    this->nombre = nombre;
}

void Videojuego:: setdescripcion(string descripcion){
    this->descripcion = descripcion;
 }

void Videojuego :: setnombreEmpresa(string nombreEmpresa){
    this->nombreEmpresa = nombreEmpresa;
}

void Videojuego :: setcostoMensual(float costoMensual){
    this->costoMensual = costoMensual;
}

void Videojuego :: setcostoTrimestral(float costoTrimestral){
    this->costoTrimestral = costoTrimestral;
}

void Videojuego :: setcostoAnual(float costoAnual){
    this->costoAnual = costoAnual;
}

void Videojuego :: setcostoVitalicia(float costoVitalicia){
    this->costoVitalicia = costoVitalicia;
}