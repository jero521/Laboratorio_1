#include <iostream>

using namespace std;

int main()
{



   int numero,fibo1,fibo2,i,reco;
   reco=0;


   do
   {
         cout << "Introduce numero mayor que 1: ";
         cin >> numero;

    }
    while(numero<=1);
      // cout << endl;
     //  cout << "Los " << numero << " primeros numeros de la serie de Fibonacci son:" << endl;
       fibo1=1;
       fibo2=1;



  // cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
      // cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
       if (fibo1<numero){
           if (fibo1%2==0){
               reco+=fibo1;
                }
        }



   }
   cout << endl << endl;
   cout<<"El resultado de la suma es: "<<reco<<endl<<endl;
   // system("pause");


}
