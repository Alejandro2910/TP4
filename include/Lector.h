#ifndef LECTOR_H
#define LECTOR_Hd
#include <istream>
#include <sstream>
#include <fstream>
#include <iostream>
#include "Pais.h"
#include "ListaPaices.h"
#include <cstdlib>


using namespace std;


class Lector
{
    public:
        ifstream lect;

        void leaDeArchivo(list<Pais>&);
        void abraParaLeer(string);
        void cierreLeido();

    protected:

    private:
};

#endif // LECTOR_H
