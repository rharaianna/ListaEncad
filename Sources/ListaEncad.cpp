#include <iostream>
#include "../Headers/ListaEncad.h"

using namespace std;

//Construtor e Destrutor
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

//Básicos
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


//Insere
void ListaEncad::insereInicio(int val)
{
    No * p = new No(val, primeiro); //Cria novo nó
    //p->setInfo(val); //Coloca info no novo nó
    //p->setProx(primeiro); //faz o novo nó apontar para o primeiro da lista
    primeiro= p; // faz o primeiro apontar para p
}
void ListaEncad::insereK(int k, int val){
    if(k<0){
        cout<<"Posição inválida"<<endl;
    }
    else if(k==0 && primeiro!=NULL){  //pq a lista não pode estar vazia?
        insereInicio(val);
    }
    else{
        int i = 0;
        No *ant = primeiro;
        for(;ant!=NULL;ant->getProx(),i++){
            if(i == k-1)
                break;
        }
        
        if(ant==NULL){
        cout<<"Posição inválida"<<endl;
        }
        
        else{
        No *p = new No();
        p->setInfo(val);
        p->setProx(ant->getProx());
        ant->setProx(p);
        }
    }

}
void ListaEncad::insereFinal(int val){
    No *ultimo; //Ponteiro para o ultimo elemento da lista
    if(primeiro!=NULL){
        for(ultimo = primeiro; ultimo->getProx() != NULL; ultimo = ultimo->getProx())//aponta ultimo para o ultimo elemento da lista
        {}
    }
    No *p = new No();// cria o nó que vai ser adicionado
    p->setInfo(val);//coloca o valor nele
    p->setProx(NULL);//aponta ele para NULL (ja que é o ultimo)

    if(primeiro==NULL){
        primeiro = p;//se a lista tiver vazia o primeiro ja aponta para o p
    }
    else{
        ultimo->setProx(p); //o ultimo elemento aponta para o novo nó
    }
}


//Remove
void removeInicio();
void removeK(int k);
void removeFinal();