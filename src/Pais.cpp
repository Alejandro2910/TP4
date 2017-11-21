#include "Pais.h"

Pais::Pais()
{
    nombre="";
    region="";
    poblacion=0;
    area=0;
    densidadPoblac=0;
    lineaCostera=0;
    migracion=0;
    mortalidadInfantil=0;
    PIB=0;
    alfabetizacion=0;
    telefonosX1000=0;
    tierraArable=0;
    cultivos=0;
    otroPorcen=0;
    clima=0;
    natalidad=0;
    mortalidad=0;
    agricultura=0;
    industria=0;
    servicio=0;
}

void Pais::setValores(string nom, string reg, int pob, int a, float denP, float liCo, float mig, float moIn, float prodIB, float alf, float telefX100, float tieAr, float cult, float otro, float clim, float nat, float mort, float ag, float ind, float serv){
    nombre=nom;
    region=reg;
    poblacion=pob;
    area=a;
    densidadPoblac=denP;
    lineaCostera=liCo;
    migracion=mig;
    mortalidadInfantil=moIn;
    PIB=prodIB;
    alfabetizacion=alf;
    telefonosX1000=telefX100;
    tierraArable=tieAr;
    cultivos=cult;
    otroPorcen=otro;
    clima=clim;
    natalidad=nat;
    mortalidad=mort;
    agricultura=ag;
    industria=ind;
    servicio=serv;
}

Pais::~Pais()
{
    //dtor
}

string Pais::muestreDatosPais(){
    stringstream datos;
    datos<<"Nombre: "<<nombre<<"\n"<<"Region: "<<region<<"\n"<<"Poblacion: "<<poblacion<<"\n"<<"Area: "<<area<<"\n"<<"Densidad poblacional: "<<densidadPoblac<<"\n"<<"Linea costera: "<<lineaCostera<<"\n"<<"Record migratorio: "<<migracion<<"\n"<<"Mortalidad infantil: "<<mortalidadInfantil<<"\n"<<"Producto interno bruto: "<<PIB<<"\n"<<"Alfabetizacion: "<<alfabetizacion<<"\n"<<"Telefonos por mil millas: "<<telefonosX1000<<"\n"<<"Porcentaje de tierra arable: "<<tierraArable<<"\n"<<"Porcentaje de cultivos: "<<cultivos<<"\n"<<"Otro porcentaje: "<<otroPorcen<<"\n"<<"Clima: "<<clima<<"\n"<<"Natalidad: "<<natalidad<<"\n"<<"Mortalidad: "<<mortalidad<<"\n"<<"Agricultura: "<<agricultura<<"\n"<<"Industria: "<<industria<<"\n"<<"Servicio: "<<servicio<<endl;
    return datos.str();
}
