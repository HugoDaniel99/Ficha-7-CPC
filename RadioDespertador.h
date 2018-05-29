#ifndef RADIODESPERTADOR_H
#define RADIODESPERTADOR_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include "CTIME.h"
using namespace std;


class CRadioDespertador{
	
	public:
		 int addStation (string name, const char * stationDatabase);
		 int removeStation (string name);
		 int removeStation (double freq);
		 void setTime (int hr, int mn, int sg);
		 void setAlarm (int hr, int mn, int sg, int duration, string station);
		 int isRinging();
		 CRadioDespertador& operator++ ();
		 CRadioDespertador& operator++ (int);
		 void printtime(CTIME&);
		 void printstations();
		 
	private:
		 CTIME currTime;
		 CTIME alarm;
		 int alarmDuration;
		 string stationAlarm;
		 vector<string> stationsName;
		 vector<double> stationsFrequency;
 	
}; 

#endif


