#include "persona.h"

#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

persona::persona()
{
	private:
		string id,name,phone,college,address;
	public:
		void menu();
		void insert();
		void display();
		void modify();
		void search();
		void delet();
};
    //ctor


persona::~persona()
{
    //dtor
}
