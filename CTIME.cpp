#include "CTIME.h"

void CTIME::setHMS(int horas, int minutos, int segundos){
	if (horas<24 && horas>=0){
		h=horas;
	}
	if (minutos<61 && minutos>=0){
		m=minutos;
	}
	if (segundos<61 && segundos>=0){
		s=segundos;
	}
	
}

bool CTIME::operator<(CTIME& t){ 
	if (h<t.h){
		return true;
	}
	else if (h==t.h && m<t.m){
		return true;
	}
	else if (h==t.h && m==t.m && s<t.s ){
		return true;
	}
	else {
		return false;
	}
}

bool CTIME::operator==(CTIME& k){
	return (h==k.h && m==k.m && s==k.s);
}

bool CTIME::operator>(CTIME& p){ 

	if (h>p.h){
		return true;
	}
	else if (h==p.h && m>p.m){
			return true;
	}
	else if (h==p.h && m==p.m && s>p.s){
			return true;
	}
	else {
			return false;
	}
}

CTIME& CTIME::operator++(){

	if (s==59){
		s=0;
		m++;
	}
	 if (m==59){
	 	m=0;
		h++;
	}
	 if (h==23){
	 	h=0;
	 }
	 else{
	 	s++;
	 }
	 
	 return (*this);
}

CTIME& CTIME::operator++(int){
	CTIME tempo;
	
	if (s==59){
		s=0;
		m++;
	}
	 if (m==59){
	 	m=0;
		h++;
	}
	 if (h==23){
	 	h=0;
	 }
	 else{
	 	s++;
	 }
	 
	 return (*this);
	
}

int CTIME::getHora(){
	return h;
}

int CTIME::getMinutos(){
	return m;
}

int CTIME::getSegundos(){
	return s;
}
