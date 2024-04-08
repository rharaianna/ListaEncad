#include <iostream>
#include "../Headers/ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    for(No*p=primeiro; p!=NULL; ){
        No*t=p->getProx();
        delete p;
        p=t;
    }
    // pq nn primeiro= NULL??
}

int ListaEncad::get(int k){
    if(k<0)
    {
        cout<<"posição Inválida"<<endl;
        exit(1);
    }

    int i = 0;
    for(No *p = primeiro; p!=NULL; p= p->getProx(),i++){
        if(i==k){
            return p->getInfo();
        }
    }
    cout<<"posição Inválida"<<endl;
    exit(1);
}

void ListaEncad::set(int k, int val){
    if(k<0){
        cout<<"posição inválida"<<endl;
    }
    int i =0;
    for(No*p= primeiro; p!= NULL; p->getProx(),i++){
        if(i==k){
            p->setInfo(val);
            return;
        }
    }
    cout<<"posição inválida"<<endl;

}

void ListaEncad::imprime(){
    cout<<"Lista: ";
    for(No*p = primeiro; p!=NULL; p->getProx()){
        cout<<p->getInfo()<<" ";
    }
    cout<<endl;
}