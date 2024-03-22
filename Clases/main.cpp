#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

class Persona{
private:
    string nombre;
    char apep[20];
public:
    Persona(string n, char a[20]){
        nombre=n;
        strcpy(a,apep);
    }
    Persona(){
        string nombre="juan";
        strcpy(apep[20],"perez");
    }
    string Nombre(){
        return nombre;
    }
};

int main()
{
    Persona p;
    Persona q;
}
