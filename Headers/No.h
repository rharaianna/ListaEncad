#ifndef NO_H
#define NO_H

#pragma once

class No
{
public:
    No(int val, No *p); //ta confuso pra mim No*p
    ~No();

    int getInfo();
    No* getProx();

    void setInfo(int val);
    void setProx(No *p);

private:
    int info;
    No *prox;
};

#endif