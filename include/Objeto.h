#ifndef OBJETO_H
#define OBJETO_H
#include <vector>
#include <string>

using namespace std;

class Objeto
{
    public:
        Objeto();
        virtual ~Objeto();
        vector<string> nombreDeDatos;
        vector<string> tipoDeDatos;
        vector<string> datos;

    protected:

    private:
};

#endif // OBJETO_H
