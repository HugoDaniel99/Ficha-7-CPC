#ifndef CTIME_H
#define CTIME_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class CTIME {
	
	public:
		void setHMS(int, int, int);
		bool operator<(CTIME& );
		bool operator==(CTIME& );
		bool operator>(CTIME& );
		CTIME& operator++(); 
		CTIME& operator++(int); 
		int getHora();
		int getMinutos();
		int getSegundos();
		
	private:
		int h, m, s;
 };

#endif
