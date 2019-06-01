#ifndef maquina_de_busca_h
#define maquina_de_busca_h

#include <iostream>
#include <string>
using std::string;
class maquinadebusca{

	public:
    maquinadebusca();
	void lerarquivos();	
		
    private:
 	string * arq1;
 	string * arq2;
 	string *arq3;
 	int c1,c2,c3;		
};
#endif