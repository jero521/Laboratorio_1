#include <iostream>
#include <cmath>    //Para algunas funciones como round()
#include <math.h>   //potencia y demas operaciones matematicas



using namespace std;

int main()
{
    //Ejercicio 1                //Escriba un programa que pida dos números A y B e imprima en pantalla el residuode la división A/B.
/*
    int a;
    int b;
    cout<<"Ingrese un numero a diferente de 0: ";
    cin>>a;
    cout<<"Ingrese un numero b diferente de 0: ";
    cin>>b;
    cout<<"El residuo de a/b es: "<< a%b<<endl;

*/

   //ejercicio 3               //Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.

/*
int A;
int B;

cout<<"Ingrese un numero A ";
cin>>A;

cout<<"Ingrese un numero B ";
cin>>B;

if (A>B){
    cout<<"El mayor es "<< A <<endl;
    }

if (A<B) {
    cout<<"El mayor es "<< B <<endl;
    }

if (A==B){
    cout<<"Los numeros son iguales "<<A<<"="<<B<<endl;
    }
*/



    //ejercicio 5            //Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo.

/*
float A;
float B;
float C;

cout<<"Ingrese el numero que quiera dividir  ";
cin>>A;

cout<<"Ingrese el numero por el que quiera dividir ";
cin>>B;

C=(A/B);
C=round(C);

cout<<A<<"/"<<B<<"="<<C<<endl;
*/



    //ejercicio 7               //Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo).
/*

int N;
int j;
int reco;
int reco2;

reco = 0;

cout << "Ingrese un numero: ";
cin >> N;
reco2 = N;


if (N==0){
    cout << "La sumatoria desde 0 hasta 0 es: 0"<<endl; }

j=N;

if (N>0){
    while (N!=0) {
        reco+=j;
        j-=1;
        N-=1;

         }
   }

else {
    while (N!=0) {
        reco+=j;
        j+=1;
        N+=1;

         }
}
cout<<"La sumatoria desde 0 hasta "<<reco2<<" es: "<<reco<<endl;

*/


    //ejercicio 9                //Escriba un programa que pida un número N e imprima el perímetro y área de un círculo con radio N. Nota: use 3.1416 como una aproximación de pi.

/*
float N;
float peri;
float area;

cout<<"Deme un numnero: ";
cin>>N;

peri=2*3.1416*N;
area=3.1416*pow(N,2);


cout<<peri<<endl;
cout<<area<<endl;
*/

    //ejercicio 11              //Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.

/*
int N;
int x;

cout<<"Ingrese un numero; ";
cin>>N;

for (x=1 ;x<11 ; x++){
    cout<<x<<"x"<<N<<"="<<x*N<<endl;
    }

*/

    //ejercicio 13          //Escriba un programa que pida un número N e imprima todos los divisores de N.

/*
int N,cont,k;

cout<<"Ingrese un numero: ";
cin>>N;

cout<<"Los divisores de n son:"<<endl;

for(k=1; k<=N ; k++){
    cont = N%k;
    if (cont == 0){
        cout<< k <<endl;
        }
    }
*/





    //ejercicio 15         //Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
/*
int N;
int a;

cout<<"Ingrese numeros, si ingresa 0 le dire la suma de los anterior numeros: ";
cin>>N;
a=0;

while(N!=0){
    a+=N;
    cin>>N;}

cout<<a;
*/
    //ejercicio 17       //Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados.

/*
int N;
int com;

com=0;
cout<<"Ingrese numeros, si ingresa 0 le dire cual de los que ingreso es mayor."<<endl;
cin>>N;

while(N!=0){

    if (N>=com){
        com=N;
        }
    cin>>N;
    }

cout<<com;
*/

    //ejercicio 19      //Escriba un programa que pida un número N e imprima si es o no un número primo.
/*
int a = 1, divi_ = 0, N = 0;

cout<<"Ingrese numero: ";
cin>>N;

do{
if(N % a == 0){
    divi_++;
    }

a++;}

while(a <= N);

    if(divi_ == 2){
    cout<<"Es primo"<<endl;}

    else{
    cout<<"No es primo"<<endl;}

*/


    //ejercicio 21     //Escriba un programa que pida un carácter C, si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla.

/*
string letra, reco;

cout<<"Ingrese una letra: ";
cin>>letra;

reco=letra;
letra=toupper(letra[0]);

if (reco==letra){
    letra=tolower(letra[0]);
    cout<<"Letra convertida: "<<letra<<endl;
    }
else{
    cout<<"Letra convertida: "<<letra<<endl;}
*/

}
