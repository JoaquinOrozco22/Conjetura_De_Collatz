/*Programa que calcula la conjtura de collatz*/
#include<iostream>
#include<math.h>
#include<conio.h>
#include<limits.h>
using namespace std;
int main()
{
	unsigned long int numero=0, contador=1;
	
		cout<<"Conjetura de collatz"<<endl;
		cout<<"Ingresa un numero: "; cin>>numero;
		cout<<"\n";
		numero=(numero*3)+1;
		cout<<endl<<numero<<endl<<endl;
		do{
			if(numero%2==0){
				numero=numero/2;
				contador++;
				cout<<contador<<"-. "<<numero<<endl;
			}
			else if(numero%2!=0){
				numero=(numero*3)+1;
				contador++;
				cout<<contador<<"-. "<<numero<<endl;
			}
		}while(numero!=1);
		cout<<"\nNumero de pasos: "<<contador<<endl;
		cout<<"\nLa Conjetura de Collatz sigue siendo verdadera."<<endl;
		cout<<"\nCommit_1."<<endl;

	
	getch();
	return 0;
}
