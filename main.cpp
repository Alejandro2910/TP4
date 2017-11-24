#include <iostream>
#include "Lector.h"
#include "ListaObjetos.h"
#include <list>

using namespace std;

int main()
{
    Lector l;
    ListaObjetos lo;
    list<Objeto>::iterator iter;
    string nombreArch="";
    cout<<"De el nombre del archivo a leer: ";
    cin>>nombreArch;
    l.abraParaLeer(nombreArch);
    l.leaNombres();
    l.leaTipo();
    l.leaObjetos(lo.listaDeObjetos);
    l.cierreLeido();

//    for(iter=(lo.listaDeObjetos).begin();iter!=(lo.listaDeObjetos).end();iter++){
//        cout<<(*iter).muestreDatosPais()<<endl;
//        cout<<endl;
//    }
    return 0;
}
