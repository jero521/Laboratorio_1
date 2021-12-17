#include <iostream>

using namespace std;

long primo(int n){
    int a = 1, divi_ = 0, N = 0;

    N=n;

    do{
    if(N % a == 0){
        divi_++;
        }

    a++;}

    while(a <= N);

        if(divi_ == 2){
        return n;

        }
        else {
            return 0;
        }




}


int main()
{
int n,a,total;

cout<<"Ingrese un numero: ";
cin>>n;

for (int i=1;i<n;i++){

a=primo(i);


total=total+a;


}
cout<<"El resultado de la suma es: "<<total<<endl;























}
