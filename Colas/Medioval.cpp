#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Nodo{
private:
	int d;
	Nodo*sig;
public:
	Nodo(int d){
		this->d=d;
		sig=NULL;
	}
	void AsigDato(int d){
		this->d=d;
	}
	int ReturnDato(){
		return d;
	}
	Nodo*retsig(){
		return sig;
	}
	void AsigSig(Nodo*sig){
		this->sig=sig;
	}
};

class Cola{
private:
	Nodo*primero;
	Nodo*ultimo;
	int cant;
public:
	Cola(){
		primero=ultimo=NULL;
		cant =0;
	}
	/********************************************************/
	void Insertar(int d){
		Nodo*aux=new Nodo(d);
		if(primero==NULL)
		{
			primero=ultimo=aux;
		}
		else
		{
			ultimo->AsigSig(aux);
			ultimo=aux;
		}
		cant++;
	}
	void Atender()
	{
		if(primero!=ultimo)
		{
			Nodo*temp=primero;
			primero=temp->retsig();
			delete temp;
			cant--;
		}
		else
		{
			Nodo*temp=primero;
			primero=ultimo=NULL;
			delete temp;
			cant--;
		}
	}
	void Mostrar()
	{
		Nodo*temp=primero;
		for(;temp!=NULL; temp=temp->retsig())
		{
			cout<<temp->ReturnDato()<<"\t";
		}
	}
	//mostrar recursividad...
	void demostrar(){
		Imprimir(primero);
	}
	void Imprimir(Nodo *n){
		if(n != NULL)
		{
			cout<<n->ReturnDato()<<"\t";
			Imprimir(n->retsig());
		}
	}
	//........................

	Nodo *Ret_ulti(){
		if(ultimo!=NULL)
			return ultimo;
		return NULL;
	}
	Nodo *Ret_pri(){
		if(primero!=NULL)
			return primero;
		return NULL;
	}
	int Cantidad(){
		return cant;
	}
};

Cola *Alternar(Cola *x,Cola *x1){
	Cola *result=new Cola();
	while (x->Ret_pri() != NULL){
		result->Insertar(x->Ret_pri()->ReturnDato());
		x->Atender();
	}

	while (x1->Ret_pri() != NULL){
		result->Insertar(x1->Ret_pri()->ReturnDato());
	}
	x1->Atender();

	return result;
}

Cola *Unir(Cola *a, Cola *b){
	Cola *Resultado=new Cola();
	if(a->Ret_pri()!=NULL){
		while (a->Ret_pri()!=NULL){
			Resultado->Insertar(a->Ret_pri()->ReturnDato());
			a->Atender();
		}
	}
	if(b->Ret_pri()!=NULL){
		while (b->Ret_pri()!=NULL){
			Resultado->Insertar(b->Ret_pri()->ReturnDato());
			b->Atender();
		}
	}
	return Resultado;
}

struct Medioval{

	Cola *plebeyos;
	Cola *nobles;
	Nodo *primero_nobles;
	Nodo *ultimo_nobles;
	Nodo *primero_plebeyos;
	Nodo *ultimo_plebeyos;

	Medioval(){
	    primero_nobles=nobles->Ret_pri();
	    ultimo_nobles=nobles->Ret_ulti();
	    primero_plebeyos=plebeyos->Ret_pri();
	    ultimo_plebeyos=plebeyos->Ret_ulti();
	}
	void InsertarM(int d ,int l){
	    Nodo*aux=new Nodo(d);
	    if(l==1){
            if(primero_nobles==NULL){
                primero_nobles=ultimo_nobles=aux;
            }
            else{
                ultimo_nobles->AsigSig(aux);
                ultimo_nobles=aux;
            }
	    }else if(l==2){
	        if(primero_plebeyos!=NULL){
                primero_plebeyos=ultimo_plebeyos=aux;
            }
            else{
                ultimo_plebeyos->AsigSig(aux);
                ultimo_plebeyos=aux;
            }
	    }
	}
	void EliminarM(int l){
	    Nodo*temp=new Nodo(0);
	    if(l==1){
            if(primero_nobles!=ultimo_nobles){
                primero_nobles=temp->retsig();
                delete temp;
            }else{
                primero_nobles=ultimo_nobles=NULL;
                delete temp;
            }
	    }else if(l==2){
	        if(primero_plebeyos!=ultimo_plebeyos){
                primero_plebeyos=temp->retsig();
                delete temp;
            }else{
                primero_plebeyos=ultimo_plebeyos=NULL;
                delete temp;
            }
	    }
	}
	void DemostrarM(){
		ImprimirM(nobles->Ret_pri());
		ImprimirM(plebeyos->Ret_pri());
	}
    void ImprimirM(Nodo *n){
		if(n != NULL)
		{
			cout<<n->ReturnDato()<<"\t";
			ImprimirM(n->retsig());
		}
	}
};

int main(){
	Medioval *colas=new Medioval();

	//colas->InsertarM(5,1);
    //colas->InsertarM(9,2);
	//colas->InsertarM(3,1);
	//colas->DemostrarM();
	cout<<endl;
	//colas->EliminarM(1);
	//colas->EliminarM(2);
	//colas->DemostrarM();


}
