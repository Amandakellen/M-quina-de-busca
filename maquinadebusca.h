#ifndef maquina_de_busca_h
#define maquina_de_busca_h

#include <iostream>
#include <string>
using std::string;
class maquinadebusca{

	public:
    maquinadebusca();
	void lerarquivos();	
	void criandomap();	
    private:
    multimap <string,string> indice_invertido;// usando multimap podem haver chaves iguais com indices diferentes;	
 	string *arq1;
 	string *arq2;
 	string *arq3;
 	int c1,c2,c3;
 	int t1,t2,t3;
 	void redimensiona(int n);
			
};
#endif
