#ifndef maquina_de_busca_h
#define maquina_de_busca_h

#include <iostream>
#include <string>
#include <map>
using std::string;
using std::multimap;
using std::map;
class maquinadebusca{

	public:
    maquinadebusca();
	void lerarquivos();	
	void criandomap();	
	void tf();
    private:
    multimap <string,string> indice_invertido;// usando multimap podem haver chaves iguais com indices diferentes;	
    multimap <string,double>idf_;
    map <string,int>arq1_tf;
    map <string,int>arq2_tf;
    map <string,int>arq3_tf;
    multimap <string,string> arq1_;
    multimap <string,string> arq2_;
    multimap <string,string> arq3_;
 	string *arq1;
 	string *arq2;
 	string *arq3;
 	int c1,c2,c3;
 	int t1,t2,t3;
 	void redimensiona(int n);
			
};
#endif
