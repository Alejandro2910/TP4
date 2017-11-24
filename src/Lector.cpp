#include "Lector.h"

void Lector::abraParaLeer(string nomArch)
{
    lect.open(nomArch);
}

void Lector::cierreLeido()
{
    lect.close();
}

void Lector::leaNombres(){
    string nombres="";
    getline(lect, nombres);
    istringstream x(nombres);
    string separador="";
    while(getline(x, separador, ',')){
        nombresObj.push_back(separador);
    }
}

void Lector::leaTipo(){
    string tipos="";
    getline(lect, tipos);
    istringstream y(tipos);
    string intermediario="";
    while(getline(y, intermediario, ',')){
        tipoDatos.push_back(intermediario);
    }
}

void Lector::leaObjetos(list<Objeto> &lisObj){
    Objeto o;
    string datos="";
    while(getline(lect, datos)){
        istringstream z(datos);
        string sep="";
        while(getline(z, sep, ',')){
            o.datos.push_back(sep);
        }
        o.nombreDeDatos=nombresObj;
        o.tipoDeDatos=tipoDatos;
        lisObj.push_back(o);
        (o.datos).clear();
        (o.nombreDeDatos).clear();
        (o.tipoDeDatos).clear();
    }
}
