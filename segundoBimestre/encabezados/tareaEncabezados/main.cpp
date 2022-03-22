#include <iostream>
#include "menu.h"
#include "insert.h"
#include "display.h"
#include "modify.h"
#include "search.h"
#include "delet.h"
#include "persona.h"
using namespace std;

#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>


main()
{
    menu();
    persona();
    search();
    insert();
    display();
    modify();
    delet();
	persona estudiante;
	//estudiante.menu();
	return 0;
}
