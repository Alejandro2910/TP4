#ifndef LISTAPAICES_H
#define LISTAPAICES_H
#include <list>
#include "Pais.h"
#include <iostream>
#include <sstream>

using namespace std;

class ListaPaices
{
    public:
        list<Pais> paices;
        ListaPaices();
        virtual ~ListaPaices();
        string muestrePaices();

    protected:

    private:
};

#endif // LISTAPAICES_H
