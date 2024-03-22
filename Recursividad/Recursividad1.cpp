#include<iostream>
using namespace std;

/***************EJERCICIO**2****************/
void Hola(int v,int x){
    for(int j=0;j<v;j++){
    cout<<"   ";}
    cout<<"hola como estas"<<endl;
    if(x>1){
        Hola(v+1,x-1);
    }
    for(int i=0;i<v;i++){
    cout<<"   ";}
    cout<<"hola como estas"<<endl;

}

int main(){
    int n,m;
    cout<<"Ingrese la cantidad de repeticiones"<<endl;
    cin>>n;
    cout<<"Ingre la cantidad de espacio de inicio"<<endl;
    cin>>m;
	Hola(m,n);
}
