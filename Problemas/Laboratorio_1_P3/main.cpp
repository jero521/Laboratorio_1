#include <iostream>

using namespace std;

int main()
{
int mes , dias;

cout<<"Inrese el numero del mes: ";
cin>>mes;
cout<<"Ingrese el numero del dia: ";
cin>>dias;

if(mes>0 and mes<=12){
    if( mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
        if(dias>0 and dias<=31){

            cout<<dias<<"/"<<mes<<" es una fecha valida"<<endl;}
        else cout<<dias<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
    if( mes==4||mes==6||mes==9||mes==11){
        if(dias>0 and dias<=30){

            cout<<dias<<"/"<<mes<<" es una fecha valida"<<endl;}
        else cout<<dias<<"/"<<mes<<" es una fecha invalida"<<endl;
        }
    if(mes==2){
        if(dias>0 and dias<=28) {
            cout<<dias<<"/"<<mes<<" es una fecha valida"<<endl;}
        else if(dias==29) cout<<dias<<"/"<<mes<<" es valida en bisiesto."<<endl;

        else cout<<dias<<"/"<<mes<<" es una fecha invalida"<<endl;

        }
    }
else cout<<mes<<" es un mes invalido."<<endl;
}
