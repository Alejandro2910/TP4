#include <iostream>
#include "Lector.h"
#include "ListaPaices.h"

using namespace std;

int main()
{
    Lector l;
    ListaPaices lp;
    l.abraParaLeer("datos prueba 1.txt");
    l.leaDeArchivo(lp.paices);
    l.cierreLeido();

    cout<<"Paices: "<<"\n"<<lp.muestrePaices()<<endl;
    return 0;
}
