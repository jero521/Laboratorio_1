#include <iostream>

using namespace std;

int main()
{

char letra;

cout<<"Ingrese una letra: ";
cin>>letra;

if(isalpha(letra)){

    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout<< letra <<" Es una vocal"<<endl;

    else if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
             cout<< letra <<" Es una vocal"<<endl;

    else
        cout<< letra <<" Es una consonante"<<endl;


    }
else {
    cout<<"No es una letra"<<endl;
    }
}
