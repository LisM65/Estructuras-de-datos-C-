#include <iostream>
using namespace std;

class Nodo{
	private:
		int dato;
		Nodo *sig;
		Nodo *ant;
	
	public:
		Nodo(){
			sig=NULL;
		}
		void AsignarDato(int d){
	        dato=d;
	    }
	    void AsignarSiguiente(Nodo *a){
	        sig=a;
	    }
	    void AsignarAnterior(Nodo *a){
	    	ant=a;
		}
	    int RetornarDato(){
	        return dato;
	    }
	    Nodo *RetornarSiguiente(){
	        return sig;
	    }
	    Nodo *RetornarAnterior(){
	    	return ant;
		}
};

class Lista{
	private:
		Nodo *inicio;
		Nodo *final;
	
	public:
		Lista(){
			inicio=final=NULL;
		}
	
		void InsertarInicio(int d){
			Nodo *n=new Nodo();
			if(inicio==NULL){
				inicio=final=n;
			}else{
				inicio->AsignarAnterior(n);
				n->AsignarSiguiente(inicio);
				inicio=n;
			}
		}
		
		void InsertarFinal(int d){
			Nodo *n=new Nodo();
			if(inicio==NULL){
				inicio=final=NULL;
			}else{
				final->AsignarSiguiente(n);
				n->AsignarAnterior(final);
				final=n;
			}
		}
		
		void EliminarInicio(){
			Nodo *aux=inicio;
			if(inicio=final){
				inicio=final=NULL;
				delete aux;
			}else{
				inicio=inicio->RetornarSiguiente();
				inicio->AsignarAnterior(NULL);
				delete aux;
			}
		}
		
		void EliminarFinal(){
			Nodo *aux=final;
			if(inicio=final){
				inicio=final=NULL;
				delete aux;
			}else{
				final=final->RetornarAnterior();
				final->AsignarSiguiente(NULL);
				delete aux;
			}
		}
		
		void Imprimir(){
			I(inicio);
		}
		void I(Nodo *n){
			if(n != NULL){
				cout<<n->RetornarDato()<<"\t";
				I(n->RetornarSiguiente());
			}
	 	}
};

int main(){
	Lista *l=new Lista();
	l->InsertarInicio(1);
	l->InsertarInicio(1);
	l->Imprimir();
}
