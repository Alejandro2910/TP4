#ifndef LECTOR_H
#define LECTOR_Hd
#include <istream>
#include <sstream>
#include <fstream>
#include <iostream>
#include "Objeto.h"
#include <cstdlib>
#include <vector>
#include <list>

using namespace std;

class Lector
{
    public:
        ifstream lect;
        vector<string> nombresObj;
        vector<string> tipoDatos;

        void leaObjetos(list<Objeto>&);
        void leaNombres();
        void leaTipo();
        void abraParaLeer(string);
        void cierreLeido();

    protected:

    private:
};

#endif // LECTOR_H
