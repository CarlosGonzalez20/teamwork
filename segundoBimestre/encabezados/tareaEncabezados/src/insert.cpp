#include "insert.h"
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

insert::insert()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id Persona         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre Persona     : ";
	cin>>name;
	cout<<"\t\t\tIngresa Telefono Persona   : ";
	cin>>phone;
	cout<<"\t\t\tIngresa Universidad Persona: ";
	cin>>college;
	cout<<"\t\t\tIngresa Direccion Persona  : ";
	cin>>address;
	file.open("ParticipantRecord.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
	file.close();
}
    //ctor


insert::~insert()
{
    //dtor
}
