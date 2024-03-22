#include<iostream>

using namespace std;

class Nodo{
private:
    int dato;
    Nodo *sig;
public:
    Nodo(){
        sig=NULL;
    }
    void AsignarDato(int d){
        dato=d;
    }
    void UnirNodos(Nodo *a){
        sig=a;
    }
    Nodo(Nodo *a){
        sig=a;
    }
    int RetornarDato(){
        return dato;
    }
    Nodo *RetornarNodo(){
        return sig;
    }
};

class Pila{
private:
    Nodo *cima;
public:
    Pila(){
        cima==NULL;
    }
    void Apilar(int v){
        Nodo *aux=new Nodo();
        if(cima==NULL){
            aux->AsignarDato(v);
            cima=aux;
        }else{
            aux->AsignarDato(v);
            aux->UnirNodos(cima);
            cima=aux;
        }
    }
    void Desapilar(){
        if(cima!=NULL){
            Nodo *aux=cima;
            cima=aux->RetornarNodo();
            delete aux;
        }
    }
    void Imprimir(){
        Nodo*temp=cima;
        temp=cima;
        while(temp!=NULL){
            cout<<temp->RetornarDato()<<"\t";
            temp=temp->RetornarNodo();
        }
    }
};

int main(){
    Pila *p;
    p=new Pila();
    p->Apilar(6);
    p->Apilar(8);
    p->Apilar(5);
    p->Desapilar();
    p->Imprimir();
    return 0;

}
