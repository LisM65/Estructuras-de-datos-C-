#include <iostream>
#include <cstring>
using namespace std;
template <class T>
class Nodo{
private:
	T d;
	Nodo<T>*sig;
public:
	Nodo(T d){
		this->d=d;
		sig=NULL;
	}
	void AsigDato(T d){
		this->d=d;
	}
	T ReturnDato(){
		return d;
	}
	Nodo<T>*retsig(){
		return sig;
	}
	void AsigSig(Nodo<T>*sig){
		this->sig=sig;
	}
};

template <class T>
struct Lista{
    Nodo<T> *inicio;
    Nodo<T> *fin;

    Lista(){
        inicio=fin=NULL;
    }
    void InsertarI(T v){
        Nodo<T> *aux=new Nodo<T>(v);
        if(inicio==NULL){
            inicio=aux;
            fin=aux;
        }else{
            aux->AsigSig(inicio);
            inicio=aux;
        }
    }

    void InsertarF(T v){
    Nodo<T> *aux=new Nodo<T>(v);
        if(inicio==NULL){
            inicio=aux;
            fin=aux;
        }else{
            fin->AsigSig(aux);
            fin=aux;
        }
    }
    void EliminarI(){
        if(fin==NULL){
			Nodo<T>*temp=fin;
			fin==NULL;
			delete temp;
		}
    }
    void EliminarF(){
        Nodo<T>*temp=new Nodo<T>(0);
        if(inicio->retsig()!=fin){

        }else{
			temp->AsigSig(fin);
			temp=fin;
			delete temp;
		}
    }
    void Mostrar()
	{
	    Nodo<T>*temp=inicio;
		for(;temp!=NULL; temp=temp->retsig())
		{
				cout<<temp->ReturnDato()<<"\t";
		}
	}
    void MostrarP()
	{
	    Nodo<T>*temp=inicio;
		for(;temp!=NULL; temp=temp->retsig())
		{
				cout<<temp->ReturnDato().retornan()<<"\t";
				cout<<temp->ReturnDato().retornae()<<"\t";
				cout<<endl;
		}
	}
};

class Persona{
	private:
		string nombre;
		int edad;
	public:
		void Insertar(string _nombres,int _edad){
			nombre=_nombres;
			edad=_edad;
		}
		string retornan(){
			return nombre;
		}
		int retornae(){
			return edad;
		}
};

int main(){
    Lista<int> *abc=new Lista<int>();
    abc->InsertarI(5);
    abc->InsertarI(6);
    abc->InsertarF(9);
    abc->InsertarI(3);
    abc->EliminarI();
    abc->EliminarF();
    Persona a;
    a.Insertar("abcde",43);

    Persona *b=new Persona();

    Lista<Persona> *P=new Lista<Persona>();
    P->InsertarI(a);
    P->MostrarP();

}
