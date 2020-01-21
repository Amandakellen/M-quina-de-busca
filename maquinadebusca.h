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
    maquinadebusca();//construtor
	void Cosine_Ranking();//calcula o Cosine Ranking e imprime na tela
	
    private:
	friend class Teste;
 	void tf();//cria o tf de cada arquivo
    map<string,double> busca();//recebe a busca a ser feita e retorna sua coordenada 
 	void coordenada_do_documento();//cria a coordenada de cada arquivo
    void lerarquivos();	//leitura dos arquivos
    void criandomap();	//cria map com dados de cada arquivo(cria indice invertido também)
    multimap <string,string>indice_invertido;// usando multimap podem haver chaves iguais com indices diferentes;	
    multimap <string,double>idf_;
    map <string,int>arq1_tf;//frequencia do arquivo1 
    map <string,int>arq2_tf;//frequencia do arquivo2 
    map <string,int>arq3_tf;//frequencia do arquivo3
    map <string,double> wd1;//coordenada do arquivo1 
	map <string,double> wd2;//coordenada do arquivo2 
	map <string,double> wd3;//coordenada do arquivo3 
    multimap <string,string> arq1_;//dados do arquivo 1
    multimap <string,string> arq2_;//dados do arquivo 2
    multimap <string,string> arq3_;//dados do arquivo 3
 	string *arq1;
 	string *arq2;
 	string *arq3;
 	int c1,c2,c3;
 	int t1,t2,t3;
 	void redimensiona(int n);
	
			
};

#endif
