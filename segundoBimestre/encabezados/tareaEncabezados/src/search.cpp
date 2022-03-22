#include "search.h"
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

search::search()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la Persona buscada------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos de Persona buscada------------------------"<<endl;
		cout<<"\nIngrese Id de la Persona que quiere buscar: ";
		cin>>participant_id;
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t Id Persona: "<<id<<endl;
				cout<<"\t\t\t Nombre Persona: "<<name<<endl;
				cout<<"\t\t\t Telefono Persona: "<<phone<<endl;
				cout<<"\t\t\t Universidad Persona: "<<college<<endl;
				cout<<"\t\t\t Direccion Persona: "<<address<<endl;
				found++;
			}
			file >> id >> name >> phone >> college >> address;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Persona no encontrada...";
		}
		file.close();
	}
}
    //ctor


search::~search()
{
    //dtor
}
