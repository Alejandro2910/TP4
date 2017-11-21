#include "Lector.h"

void Lector::leaDeArchivo(list<Pais> &listaPa)
{
    Pais p;
    string nombre="";
    string region="";
    int poblacion=0;
    int area=0;
    float densidadPoblac=0;
    float lineaCostera=0;
    float migracion=0;
    float mortalidadInfantil=0;
    float PIB=0;
    float alfabetizacion=0;
    float telefonosX1000=0;
    float tierraArable=0;
    float cultivos=0;
    float otroPorcen=0;
    float clima=0;
    float natalidad=0;
    float mortalidad=0;
    float agricultura=0;
    float industria=0;
    float servicio=0;
    string datosPais="";
    while(getline(lect,datosPais))
    {
        int numDato=0;
        string dato="";
        istringstream x(datosPais);
        while(getline(x, dato, ','))
        {
            switch(numDato)
            {
            case 0:
                nombre=dato;
                break;
            case 1:
                region=dato;
                break;
            case 2:
                poblacion=atoi((dato).c_str());
                break;
            case 3:
                area=atoi((dato).c_str());
            case 4:
                densidadPoblac=atof((dato).c_str());
                break;
            case 5:
                lineaCostera=atof((dato).c_str());
                break;
            case 6:
                migracion=atof((dato).c_str());
                break;
            case 7:
                mortalidadInfantil=atof((dato).c_str());
                break;
            case 8:
                PIB=atof((dato).c_str());
                break;
            case 9:
                alfabetizacion=atof((dato).c_str());
                break;
            case 10:
                telefonosX1000=atof((dato).c_str());
                break;
            case 11:
                tierraArable=atof((dato).c_str());
                break;
            case 12:
                cultivos=atof((dato).c_str());
                break;
            case 13:
                otroPorcen=atof((dato).c_str());
                break;
            case 14:
                clima=atof((dato).c_str());
                break;
            case 15:
                natalidad=atof((dato).c_str());
                break;
            case 16:
                mortalidad=atof((dato).c_str());
                break;
            case 17:
                agricultura=atof((dato).c_str());
                break;
            case 18:
                industria=atof((dato).c_str());
                break;
            case 19:
                servicio=atof((dato).c_str());
                break;
            }
            numDato++;
        }
        p.setValores(nombre, region, poblacion, area, densidadPoblac, lineaCostera, migracion, mortalidadInfantil, PIB, alfabetizacion, telefonosX1000, tierraArable, cultivos, otroPorcen, clima, natalidad, mortalidad, agricultura, industria, servicio);
        listaPa.push_back(p);
    }
}

void Lector::abraParaLeer(string nomArch)
{
    lect.open(nomArch);
}

void Lector::cierreLeido()
{
    lect.close();
}
