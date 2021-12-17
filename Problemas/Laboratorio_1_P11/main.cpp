#include <iostream>

using namespace std;

int jamon;

long mcm(int N ){
    for(int k=2; N >1 ; k++ ){
        while(N %k==0){
           // printf("%d *",k);

            N/=k;

            return k;
        }

    }
}

int main()
{
int n,mcm3,total;
cout<<"Por favor ingrese un numero entero: ";
cin>>n;

total=1;

for (int i=1;i<=n;i++){

    mcm3=mcm(i);

total=total*mcm3;


}



if(n>5){
    total=total/2;
}
if(n>9){
    total=total/2;
}
cout<<"El minimo comun multiplo es :"<<total<<endl;



}

