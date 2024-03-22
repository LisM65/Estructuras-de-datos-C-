#include <iostream>

using namespace std;
class Nodo{
private:
    int d;
    Nodo *sig;
public:
    Nodo(){
        sig=NULL;
    }
    void asigdat(int d){
        this->d=d;
    }

    void unir(Nodo *n){
        sig=n;
    }
    Nodo(Nodo *n){
        sig=n;
    }
    int dat(){
        return d;
    }
    Nodo *retsig(){
        return sig;
    }
};
//******************************
class Pila{
private:
    Nodo *cima;
public:
    Pila(){
        cima=NULL;
    }
    void Apilar(int v){
    if(cima==NULL){
        Nodo *aux=new Nodo();
        aux->asigdat(v);
        cima=aux;
    } else{
       Nodo *aux1=new Nodo();
       aux1->asigdat(v);
       aux1->unir(cima);
       cima=aux1;

    }

    }
 void DesApilar(){
        if(cima!=NULL){
            Nodo *aux=cima;
            cima=aux->retsig();
            delete aux;
        }
    }
void imprimir(){

        /*
        int temp;
     Nodo*temp=cima;
     temp=cima;
     while(temp!=NULL){
        cout<<temp->dat()<<endl;

        temp=temp->retsig();
     }*/
    int cont=0;
     for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
        cout<<temp->dat()<<endl;
        cont=cont+1;
        }
cout<<"a.- num de elementos: "<<cont<<endl;
    }

void imprimirFondoelement(){
 int cont1=0;
     for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
        cont1++;
        if(cont1==4){
                cont1=temp->dat();
        cout<<"b.- NumeroFond :"<<cont1<<endl;
        }

}

}
};
//************************************
int main()
{/*
    Nodo *n;
    n=new Nodo();
    n->asigdat(5);*/
//***********************
    Pila *p;
    p=new Pila();
    p->Apilar(5);
    p->Apilar(8);
    p->Apilar(10);
    p->Apilar(7);
    p->imprimir();
    p->imprimirFondoelement();


//*****************************
    return 0;
}

