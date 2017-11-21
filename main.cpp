#include <iostream>
#include "Lector.h"
#include "ListaPaices.h"

using namespace std;

int main()
{
    Lector l;
    ListaPaices lp;
    list<Pais>::iterator iter;

    l.abraParaLeer("datos prueba 1.txt");
    l.leaDeArchivo(lp.paices);
    l.cierreLeido();

    for(iter=(lp.paices).begin();iter!=(lp.paices).end();iter++){
        cout<<(*iter).muestreDatosPais()<<endl;
        cout<<endl;
    }
    //cout<<"Paices: "<<"\n"<<lp.muestrePaices()<<endl;
    return 0;
}
