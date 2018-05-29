#include "RadioDespertador.h"

int CRadioDespertador::addStation (string name, const char * stationDatabase){
		string nomeestacao;
		double frequencia;
		ifstream fich (stationDatabase);
		
			while(!fich.eof() ){
				
				fich>>nomeestacao;
				std::cin >> setprecision(2) >> std::fixed;
				fich>>frequencia;
				
				
				if( nomeestacao==name ){
					stationsName.push_back(nomeestacao);
					stationsFrequency.push_back(frequencia);
					
					}	
					return 0;
				}
			
	return -1;
	fich.close();
}

int CRadioDespertador::removeStation (string name){
	for(unsigned int i=0;i<stationsName.size();i++){
		if(stationsName[i]==name){
			stationsName.erase(stationsName.begin()+i);
			return 0;
		}
		else{
			return -1;
		}
	}
}

int CRadioDespertador::removeStation (double freq){
	for(unsigned int j=0;j<stationsFrequency.size();j++){
		if(stationsFrequency[j]==freq){
			stationsFrequency.erase(stationsFrequency.begin()+j);
			return 0;
		}
		else{
			return -1;
		}
	}
}

void CRadioDespertador::setTime (int horas, int minutos, int segundos){
	currTime.setHMS(horas,minutos,segundos);
}

void CRadioDespertador::setAlarm(int hours, int minutes, int seconds, int duracao, string station){
	
	alarm.setHMS(hours,minutes,seconds);
	alarmDuration=duracao;
	for(unsigned int i=0;i<stationsName.size();i++){
		if(station==stationsName[i]){
			stationAlarm=station;
		}
		else{
			addStation (station,"texto.txt");
		}
	}
	
}

int CRadioDespertador::isRinging(){
	if (currTime<alarm){
		return -1;
	}
	if (currTime==alarm){
		return 0;
	}
	if (currTime>alarm){
		return 1;
	}
}


CRadioDespertador& CRadioDespertador::operator++ (){
	
   ++currTime;
   return *this;
   
}

CRadioDespertador& CRadioDespertador::operator++(int){
	
	currTime++;
	return *this;
	
}

void CRadioDespertador::printtime(CTIME& c){
	cout<<c.getHora()<<":"<<c.getMinutos()<<":"<<c.getSegundos()<<endl;
}

void CRadioDespertador::printstations(){
	
	for(unsigned int i=0;i<stationsName.size();i++){
		cout<<stationsName[i]<< " " <<endl;
	}
	for(unsigned int j=0;j<stationsFrequency.size();j++){
		std::cout << setprecision(2) << std::fixed; //setorecision do cin ja le do ficheiro como double, isto nao era necessario
		cout<<stationsFrequency[j]<< " "<<endl;
	}
}


