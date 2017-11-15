#include "ListaPaices.h"

ListaPaices::ListaPaices()
{
    //ctor
}

ListaPaices::~ListaPaices()
{
    //dtor
}

string ListaPaices::muestrePaices(){
    stringstream vals;
    list<Pais>::iterator it;
    for(it=paices.begin();it!=paices.end();it++){
        vals<<(*it).muestreDatosPais()<<"\n";
    }
    return vals.str();
}
