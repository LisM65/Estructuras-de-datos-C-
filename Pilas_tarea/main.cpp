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
	int cont=0;
	
    Pila(){
        cima=NULL;
    }
    
    void Apilar(int v){
    	if(cima==NULL){
	        Nodo *aux=new Nodo();
	        aux->asigdat(v);
	        cima=aux;
	    }else{
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
	int imprimirNumeroElementos(){
	     for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
	        cout<<temp->dat()<<endl;
	        cont++;
	        }
		//cout<<"a.- num de elementos: "<<cont<<endl;
	return cont;
	    }

	void imprimirFondoelement(){
	    for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
	        if(cima!=0){
	                cont=temp->dat();
	        }   
		}
		//cout<<"b.- NumeroFond :"<<cont<<endl;
		cout<<"b.- NumeroFond :"<<cont<<endl;
	}
	
	void tomarElemento(){
		for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
	        if(cima!=0){
	                cont=temp->dat();
	        }  
		}
		//cout<<"b.- NumeroFond :"<<cont<<endl;
		//cout<<"b.- NumeroFond :"<<cont<<endl;
	}


	void UnirPilas(Pila *a){
		Nodo *aux=new Nodo();
		Pila *temp=new Pila();
		for( Nodo*temp=cima;temp!=NULL;temp=temp->retsig()){
	        if(cima!=0){
	        		cont=temp->dat();
			} 
		}
	}
	
	/*void InvertirPila(){
		if(cima!=NULL){
	        Nodo *aux=new Nodo();
	        aux->asigdat(d);
	        cima=aux;
	    } else{
	       Nodo *aux1=new Nodo();
	       aux1->asigdat(d);
	       aux1->unir(cima);
	       cima=aux1;
		}
	}*/	
};

int main(){
    Pila *p;
    p=new Pila();
    p->Apilar(6);
    p->Apilar(8);
    p->Apilar(7);
    p->Apilar(10);
    p->Apilar(15);
    p->Apilar(18);
    p->Apilar(20);
    p->DesApilar();
    cout<<"el numero total de elemntos es: "<<p->imprimirNumeroElementos()<<endl;
    p->imprimirFondoelement();
    cout<<endl;
    
    Pila *q;
    q=new Pila();
    q->Apilar(3);
    q->Apilar(5);
    q->Apilar(9);
    q->Apilar(11);
    q->Apilar(14);
    q->Apilar(17);
    q->DesApilar();
    cout<<"el numero total de elemntos es: "<<q->imprimirNumeroElementos()<<endl;
    q->imprimirFondoelement();
    
    return 0;
    
    
};
