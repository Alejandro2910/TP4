#ifndef PAIS_H
#define PAIS_H
#include <iostream>
#include <sstream>

using namespace std;

class Pais
{
    public:
        string nombre;
        string region;
        float poblacion;
        float area;
        float densidadPoblac;
        float lineaCostera;
        float migracion;
        float mortalidadInfantil;
        float PIB;
        float alfabetizacion;
        float telefonosX1000;
        float tierraArable;
        float cultivos;
        float otroPorcen;
        float clima;
        float natalidad;
        float mortalidad;
        float agricultura;
        float industria;
        float servicio;

        Pais();
        void setValores(string, string, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);
        virtual ~Pais();
        string muestreDatosPais();

    protected:

    private:
};

#endif // PAIS_H
