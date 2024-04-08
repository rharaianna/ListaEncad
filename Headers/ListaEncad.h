#ifndef LISTAENCAD_H
#define LISTAENCAD_H
#include "No.h"

#pragma once

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();

    int get(int k);
    void set(int k, int val);
    void imprime();

private:
    No *primeiro;
};

#endif