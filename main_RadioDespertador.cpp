#include <iostream>
#include "CTIME.h"
#include "RadioDespertador.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	CRadioDespertador a1;
	int f=a1.addStation("Radio_Onda_Viva","texto.txt");
	a1.printstations();
	
	
	return 0;
}
