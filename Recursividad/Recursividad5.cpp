#include<iostream>
#include<string.h>
using namespace std;

void Devolver(char a[]){
    //char *cadena=strdup(a.c_str());
    int x=strlen(a);
    //cout<<x<<"\t";
    //cout<<"\t"<<a[x-1];
    int i=0;
    while(i<x){
        i=i+1;
    }
    cout<<a[i-1]<<"\t";
}

/***************DEVOLVER EN FORMA RECURSIVA************************/

int main(){
    Devolver("abcde");
}
