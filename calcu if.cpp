#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	int ran;
	
	float V1,V2,S,R,M,D,P,R1,R2,RN, opc;
	cout<<"\t***Menu***"<<endl;
	cout<<"\t\t*** MI PRIMER CALCULADORA ***"<<endl<<endl;
	cout<<"\tOperaciones: "<<endl;
	cout<<"\t1: Suma"<<endl;
	cout<<"\t2: Resta"<<endl;
	cout<<"\t3: Multiplicacion"<<endl;
	cout<<"\t4: Division"<<endl;
	cout<<"\t5: Potencia"<<endl;
	cout<<"\t6: Raiz"<<endl;
	cout<<"\t7: RaizN"<<endl;
	cout<<"\t8: Salir"<<endl;
	cout<<"\tElige cual operacion deseas utilizar: "<<endl;
	cin>>opc;
	if (opc!=8)
	{
	
	
	cout<<"\tDame 2 valores"<<endl<<endl;
	cout<<"Dame el valor 1: "<<endl;
	cin>>V1;
	cout<<"Dame el valor 2: "<<endl;
	cin>>V2;
}
	if(opc==1)
	{
	cout<<"\tSuma"<<endl;
	cout<<"El resultado es: "<<S<<endl;
	}
	else if(opc==2)
	{
	cout<<"\tResta"<<endl;
	cout<<"El resultado es: "<<R<<endl;
	}
	else if(opc==3)
	{
		cout<<"\tMultiplicacion"<<endl;
	cout<<"El resultado es: "<<M<<endl;
	}
	else if(opc==4)
	{
		cout<<"\tDivision"<<endl;
	cout<<"El resultado es: "<<D<<endl;
	}
	else if(opc==5)
	{
			cout<<"\tPotencia"<<endl;
	P=pow(V1,V2);
	cout<<"El resultado es: "<<P<<endl;
	}
	else if(opc==6)
	{
		cout<<"\tRaiz"<<endl;
	R1=sqrt(V1);
	R2=sqrt(V2);
	cout<<"El resultado es: "<<R1<<endl;
	cout<<"El resultado es: "<<R2<<endl;
	}
	else if(opc==7)
	{
		cout<<"\tRaizN"<<endl;
	RN=sqrt(V1)*V2;
	cout<<"El resultado es: "<<RN<<endl;
	}

	else if(opc==8)
	{
	exit (0);
	}
	
	S=V1+V2;
	R=V1-V2;
	M=V1*V2;
	D=V1/V2;
	P=pow(V1,V2);
	R1=sqrt(V1);
	R2=sqrt(V2);
	RN=sqrt(V1)*V2;
	
	return 0;
}
 "nueva linea"
