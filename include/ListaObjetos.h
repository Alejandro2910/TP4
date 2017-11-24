#ifndef LISTAOBJETOS_H
#define LISTAOBJETOS_H
#include <list>
#include "Objeto.h"

using namespace std;

class ListaObjetos
{
    public:
        list<Objeto> listaDeObjetos;
        ListaObjetos();
        virtual ~ListaObjetos();

    protected:

    private:
};

#endif // LISTAOBJETOS_H
