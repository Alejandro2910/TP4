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
    for(it=(this->paices).begin();it!=(this->paices).begin();it++){
        vals<<(*it).muestreDatosPais()<<"\n";
    }
    return vals.str();
}
