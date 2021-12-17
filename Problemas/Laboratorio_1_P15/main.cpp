#include <iostream>

using namespace std;



int main()
{
int n,j,contador,suma,var;
cout<<"Ingrese un numero impar: ";
cin>>n;
contador=1;
j=n*n;
suma=0;
var=4;


while(contador<=j){
    if(contador<9){
    suma+=contador;
   // cout<<contador<<endl;
    contador+=2;}

    if(contador>8){
        suma+=contador;
     //   cout<<contador<<endl;
        contador+=4;
        n=6;}

    if(var==0){
        n=var;
       // cout<<"aaaaaa";
        var-=1;
    }
    else{
        var=n+2;
    }
//proceso j.16


}
cout<<suma<<"\n";
}

