#ifndef LISTAENCAD_H
#define LISTAENCAD_H
#include "No.h"

#pragma once

class ListaEncad
{
public:
    //Construtor e destrutor
    ListaEncad();
    ~ListaEncad();

    //Básicos
    int get(int k);
    void set(int k, int val);
    void imprime();

    //Insere
    void insereInicio(int val);
    void insereK(int k, int val);
    void insereFinal(int val);

    //Remove
    void removeInicio();
    void removeK(int k);
    void removeFinal();

private:
    No *primeiro;
};

#endif