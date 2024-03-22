#include<iostream>
using namespace std;
double factorial(double n){
    double m,t;
    if(n>1){
        t=factorial(n-1);
    }else if (n==1||n==0){
        t=1;
    }
    return m=(t)*(n);
}
double Sumatoria(double v){
    if(v==0){
        return 1;
    }else{
		double a=1/factorial(v);
        return Sumatoria(v-1)+a;
    }
}

int main(){
    cout<<Sumatoria(2);
}
