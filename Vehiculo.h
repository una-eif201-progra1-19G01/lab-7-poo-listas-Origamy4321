//
// Created by Lady Asura III on 20/9/2019.
//

#ifndef LAB_7_POO_LISTAS_ORIGAMY4321_VEHICULO_H
#define LAB_7_POO_LISTAS_ORIGAMY4321_VEHICULO_H

#include <string>

using namespace std;

class Vehiculo {

private:

    string marca;
    string modelo;
    int anno;
    int placa;
    float costo;
    float tiempoArrendado;

public:

    Vehiculo();

    float getCosto() const;

    void setCosto(float costo);

    float getTiempoArrendado() const;

    void setTiempoArrendado(float tiempoArrendado);

    Vehiculo(const string &marca, const string &modelo, int anno, int placa, float costo, float tiempoArrendado);

    const string &getMarca() const;

    void setMarca(const string &marca);

    const string &getModelo() const;

    void setModelo(const string &modelo);

    int getAnno() const;

    void setAnno(int anno);

    int getPlaca() const;

    void setPlaca(int placa);

    string toString();

    void eliminarDatosAnno(int);

    void eliminarMarca(int);

    void eliminarModelo(int);

    float calcularCosto();

};


#endif //LAB_7_POO_LISTAS_ORIGAMY4321_VEHICULO_H
