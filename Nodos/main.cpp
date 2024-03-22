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

int main(){
    Nodo *n;
    n=new Nodo();
    n->AsignarDato(5);

    Nodo *n1;
    n1=new Nodo();
    n1->AsignarDato(10);
    n->UnirNodos(n1);

    Nodo *n2;
    n2=new Nodo();
    n2->AsignarDato(8);
    n1->UnirNodos(n2);

   /* Nodo *n3;
    n3=new Nodo();
    n3->AsignarDato(3);
    n1->UnirNodos(n3);*/

    cout<<n->RetornarDato()<<"\t";
    cout<<n2->RetornarDato()<<"\t";
    cout<<n->RetornarNodo()->RetornarDato()<<"\t";

}
