#include <iostream>

using namespace std;
int n,t,conta,numero;
int main()
{

cout<<"Ingrese un numero: ";
n=1;
cin>>numero;
t=1;

while(t<=numero){

    if (numero%t==0){
    conta+=1;
}

t+=1;


}
cout<<"El numero es :"<<numero<<" que tiene "<< conta <<" divisores."<<endl;
}
