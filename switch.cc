//Programa
//Autor: Daniela Canul Garcia
//Fecha: 06 de Noviembre del 2017
#include <iostream>
using namespace std;
int main (){
char variable;
cout<<"Escoge una opcion entre A,B,C,D,E"<<endl;
cin>>variable;
variable=toupper(variable);
 switch (variable){
  case 'A' : cout << "Excelente"<<endl;break;
  case 'B' : cout << "Muy bien"<<endl;break;
  case 'C' : cout << "Bien"<<endl;break;
  case 'D' : cout << "Pasaste"<<endl;break;
  case 'E' : cout << "Intentalo nuevamente"<<endl;break; 
  default : cout << "Opcion no valida"<<endl;
}
return 0;
}
