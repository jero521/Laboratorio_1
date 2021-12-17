#include <iostream>
#include <cstdlib>  //atoi(.c_str()) = pasar string a int
#include <math.h>  //para el pow() = potencia

using namespace std;

int main()
{

string N,aa;
int reco,total,final;

cout<<"Ingrese un numero entero: ";
cin>>N;


final=0;

for(int i=0 ; i<N.size() ; i++){
    aa=N[i];
    reco=atoi(aa.c_str());
    total=reco;
    if(total!=0){
        reco=pow(reco ,total);
        }
    else{
        reco=0;
        }
    final=reco+final;

    }

cout<<"El resultado de la suma es :"<<final<<endl<<endl;


}
