
#include <string>
using namespace std;

class Videojuego {
    private:
        string nombre, descripcion, nombreEmpresa;
        float costoMensual, costoTrimestral, costoAnual, costoVitalicia;
    public:
        void agregarNuevaCategoria(Categoria c);
        void agregarVideojuego(Videojuego v);
        bool tienePartidaActiva();
        void eliminarSuscripciones();
        void eliminarPartidas();
        DataVideojuego getDataVideojuego();
        JugadorVideojuego getJugadorVideojuego();
        TipoSuscripcion getTipoSuscripcion(dataSusIngresada sus);
        float getTotalHoras();
        int getTotalSuscripcones();
        Videojuego(string nombre,string descripcion,string nombreEmpresa,float costoMensual,float costoTrimestral,float costoAnual,float costoVitalicia);
        Videojuego(); // ira ?
        string getnombre();
        string getdescripcion();
        string getnombreEmpresa();
        float getcostoMensual();
        float getcostoTrimestral();
        float getcostoAnual();
        float getcostoVitalicia();
        void setnombre(string nombre);
        void setdescripcion(string descripcion);
        void setnombreEmpresa(string nombreEmpresa);
        void setcostoMensual(float costoMensual);
        void setcostoTrimestral(float costoTrimestral);
        void setcostoAnual(float costoAnual);
        void setcostoVitalicia(float costoVitaliacia);
};