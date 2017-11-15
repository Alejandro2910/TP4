#include "Lector.h"

void Lector::leaDeArchivo(list<Pais> &listaPa){
        Pais p;
        string datosPais="";
        while(getline(lect,datosPais)){
            int numDato=0;
            string dato="";
            istringstream x(datosPais);
            while(getline(x, dato, ',')){
                switch(numDato){
                case 0:
                    p.nombre=dato;
                break;
                case 1:
                    p.region=dato;
                break;
                case 3:
                    p.poblacion=atof((dato).c_str());
                break;
                case 4:
                    p.densidadPoblac=atof((dato).c_str());
                break;
                case 5:
                    p.lineaCostera=atof((dato).c_str());
                break;
                case 6:
                    p.migracion=atof((dato).c_str());
                break;
                case 7:
                    p.mortalidadInfantil=atof((dato).c_str());
                break;
                case 8:
                    p.PIB=atof((dato).c_str());
                break;
                case 9:
                    p.alfabetizacion=atof((dato).c_str());
                break;
                case 10:
                    p.telefonosX1000=atof((dato).c_str());
                break;
                case 11:
                    p.tierraArable=atof((dato).c_str());
                break;
                case 12:
                    p.cultivos=atof((dato).c_str());
                break;
                case 13:
                    p.otroPorcen=atof((dato).c_str());
                break;
                case 14:
                    p.clima=atof((dato).c_str());
                break;
                case 15:
                    p.natalidad=atof((dato).c_str());
                break;
                case 16:
                    p.mortalidad=atof((dato).c_str());
                break;
                case 17:
                    p.agricultura=atof((dato).c_str());
                break;
                case 18:
                    p.industria=atof((dato).c_str());
                break;
                case 19:
                    p.servicio=atof((dato).c_str());
                break;
                }
                numDato++;
                listaPa.push_back(p);
            }
        }
}

void Lector::abraParaLeer(string nomArch){

    lect.open(nomArch);
}

void Lector::cierreLeido(){
    lect.close();
}
