#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <ctype.h>
#include <vector>
#include <map>
#include <cmath>
#include "maquinadebusca.h"
using std::cout;
using std::endl;
using std::string;
using std::multimap;
using std::pair;
using std::string;
using std::multimap;
using std::map;
using std::vector;


maquinadebusca::maquinadebusca()
{
	c1=100;
	c2=100;
	c3=100;
	t1=1;
	t2=1;
	t3=1;
	arq1=new string[c1];
	arq2=new string[c2];
	arq3=new string[c3];
		lerarquivos();
}
void maquinadebusca::redimensiona(int n)
{
	
	string *aux=new string[n];

		 for(int j=0;j<t1;j++){
        aux[j]=arq1[j];
      }
			delete []arq1;
			arq1=aux;
             c1=n;
string *aux2=new string[n];			
 for(int j=0;j<t2;j++){
        aux2[j]=arq2[j];
      }
			delete []arq2;
			arq2=aux2;
             c2=n;
   string *aux3=new string[n];	          
  for(int j=0;j<t3;j++){
        aux3[j]=arq3[j];
      }
			delete []arq2;
			arq3=aux3;
             c3=n;
     
			
}
 void maquinadebusca::lerarquivos()
 {
    std::ifstream in;
    int i=0;
    int indice=0;
    in.open("d1.txt");
    char auxiliar;
  //arq1  
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(t1==c1){
	 redimensiona(2*c1);
 }else{
  if( isalpha(auxiliar)) {//verifica se Ã© uma letra
    if(isupper(auxiliar)){//verifica se Ã© letra maiscula
	 auxiliar=tolower(auxiliar);
     arq1[indice]=auxiliar;
    }else{arq1[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se Ã© numero
     arq1[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se Ã© espaÃ§o
	   arq1[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se Ã© um ponto
              if(auxiliar==33){arq1[indice]=" ";}
              else{
                 if(auxiliar==44){arq1[indice]=" ";}
                 else{
	              if(auxiliar==58){arq1[indice]=" ";}
                  else{
                    if(auxiliar==46){arq1[indice]=" ";}
                    else{
                      if(auxiliar==59){arq1[indice]=" ";}
                      else{
	                    if(auxiliar==63){arq1[indice]=" ";}
                        else{indice=indice-1;}
	                  }
                    }
                  }
                }
               }
           }
       }

         }
      }
    i++;
    indice++;
    t1++;
	}

  }
}
in.close();

//arq2
indice=0;
i=0;
in.open("d2.txt");
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(t2==c2){
 redimensiona(2*c2);
 }else{
  if( isalpha(auxiliar)) {//verifica se Ã© uma letra
    if(isupper(auxiliar)){//verifica se Ã© letra maiscula
	 auxiliar=tolower(auxiliar);
     arq2[indice]=auxiliar;
    }else{arq2[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se Ã© numero
     arq2[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se Ã© espaÃ§o
	   arq2[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se Ã© um ponto
              if(auxiliar==33){arq2[indice]=" ";}
              else{
                 if(auxiliar==44){arq2[indice]=" ";}
                 else{
	              if(auxiliar==58){arq2[indice]=" ";}
                  else{
                    if(auxiliar==46){arq2[indice]=" ";}
                    else{
                      if(auxiliar==59){arq2[indice]=" ";}
                      else{
	                    if(auxiliar==63){arq2[indice]=" ";}
                        else{indice=indice-1;}
	                  }
                    }
                  }
                }
               }
           }
       }

         }
      }
    i++;
    indice++;
    t2++;
	}

  }
}
in.close();

indice=0;
i=0;
in.open("d3.txt");
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(t3==c3){
redimensiona(2*c3);
 }else{
  if( isalpha(auxiliar)) {//verifica se Ã© uma letra
    if(isupper(auxiliar)){//verifica se Ã© letra maiscula
	 auxiliar=tolower(auxiliar);
     arq3[indice]=auxiliar;
    }else{arq3[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se Ã© numero
     arq3[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se Ã© espaÃ§o
	   arq3[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se Ã© um ponto
              if(auxiliar==33){arq3[indice]=" ";}
              else{
                 if(auxiliar==44){arq3[indice]=" ";}
                 else{
	              if(auxiliar==58){arq3[indice]=" ";}
                  else{
                    if(auxiliar==46){arq3[indice]=" ";}
                    else{
                      if(auxiliar==59){arq3[indice]=" ";}
                      else{
	                    if(auxiliar==63){arq3[indice]=" ";}
                        else{indice=indice-1;}
	                  }
                    }
                  }
                }
               }
           }
       }

         }
      }
    i++;
    indice++;
    t3++;
	}

  }
}
in.close();


}
void maquinadebusca:: criandomap()
{
string aux;
string aux3;
std::map<string,string>::iterator it;
std::map<string,string>::iterator it2;
multimap <string,string> arq1_aux;
multimap <string,string> arq2_aux;
multimap <string,string> arq3_aux;
multimap <string,string> aux4;
int n;

//arq 1
for(int i=0;i<t1;i++){
aux =arq1[i];

   if(aux!=" " )
    {
      if(i==0){aux3=aux;}
     else{aux3 =aux3+aux;}

    }
    else
    {

		 if(aux==" ")
	     {
	     	if(!arq1_aux.empty())
			 {
			 	 for(it=arq1_aux.begin();it!=arq1_aux.end();it++)
				  {
				  	
					  	n=arq1_aux.count(aux3);	
				  }
		       arq1_.insert(pair<string,string>(aux3,"d1.txt"));
			   if(n==0)
			   {
			 	arq1_aux.insert(pair<string,string>(aux3,"d1.txt"));
			   }
	     	
			 }
			 else{
			    arq1_.insert(pair<string,string>(aux3,"d1.txt"));
				 arq1_aux.insert(pair<string,string>(aux3,"d1.txt"));
				
			 }
	     
	     	aux3="";

		 }
       
  	   
    }

}
//arq2

for(int i=0;i<t2;i++){
aux =arq2[i];

   if(aux!=" " )
    {
      if(i==0){aux3=aux;}
     else{aux3 =aux3+aux;}

    }
    else
    {

		 if(aux==" ")
	     {
	     	if(!arq2_aux.empty())
			 {
			 	 for(it=arq2_aux.begin();it!=arq2_aux.end();it++)
				  {
				  	n=arq2_aux.count(aux3);
				  }
		        arq2_.insert(pair<string,string>(aux3,"d2.txt"));
			   if(n==0)
			   {
			 	arq2_aux.insert(pair<string,string>(aux3,"d2.txt"));
			   }
	     	
			 }
			 else{
			 
				 arq2_aux.insert(pair<string,string>(aux3,"d2.txt"));
				  arq2_.insert(pair<string,string>(aux3,"d2.txt"));
				
			 }
	     
	     	aux3="";

		 }
       
  	   
    }

}

//arq 3
for(int i=0;i<t3;i++){
aux =arq3[i];

   if(aux!=" " )
    {
      if(i==0){aux3=aux;}
     else{aux3 =aux3+aux;}

    }
    else
    {

		 if(aux==" ")
	     {
	     	if(!arq3_aux.empty())
			 {
			 	 for(it=arq3_aux.begin();it!=arq3_aux.end();it++)
				  {
				  	n=arq3_aux.count(aux3);
				  }
		         arq3_.insert(pair<string,string>(aux3,"d3.txt"));
			   if(n==0)
			   {
			 	arq3_aux.insert(pair<string,string>(aux3,"d3.txt"));
			   }
	     	
			 }
			 else{
                 arq3_.insert(pair<string,string>(aux3,"d3.txt"));
				 arq3_aux.insert(pair<string,string>(aux3,"d3.txt"));
				
			 }
	     
	     	aux3="";

		 }
       
  	   
    }

}
	
aux4=arq1_aux;
arq1_aux.clear();
string f,s;
for(it=arq2_aux.begin();it!=arq2_aux.end();it++)
	{
		f=it->first;
		s=it->second;
       aux4.insert(pair<string,string>(f,s));
	}
arq2_aux.clear();	

	for(it=arq3_aux.begin();it!=arq3_aux.end();it++)
	{
		f=it->first;
		s=it->second;
       aux4.insert(pair<string,string>(f,s));
	}
arq3_aux.clear();
string concatena;
string arq=" ";
string ant=" ";
string anterior=" ";
double idf_aux;
int nt;
int N=3;
int sai=0;
	for(it=aux4.begin();it!=aux4.end();it++)
	{ 
		f=it->first;
		
	    n=aux4.count(f);
	    
	    if(anterior!=f)
		{
			if(n==1)
		{
         anterior=f;
          s=it-> second;
         indice_invertido.insert(pair<string,string>(f,s));
         nt=1;
          idf_aux=log(N)-log(nt);
			  if(idf_.count(f)==0)
			  {
			  	 idf_.insert(pair<string,double>(f,idf_aux));
			  }
		}
		if(n>1)
		{
		  
		   concatena=it->second;
		  if(n==2)
		  {
		  	it2=it++;
		  	nt=2;
		  	idf_aux=log(N)-log(nt);

			  if(idf_.count(f)==0)
			  {
			  	 idf_.insert(pair<string,double>(f,idf_aux));
			  }
		  	while(sai!=1)
			{
				arq=it2->second;
                if(arq!= concatena)
				{
					if(arq!=anterior)
					{
						concatena=concatena + " " +arq;
						sai=1;
					}
					anterior=arq;
				}
				it2++;
			
			}
			sai=0;
		  }
		  else{
		  	 nt=3;
		  	 idf_aux=log(N)-log(nt);
			  if(idf_.count(f)==0)
			  {
			  	 idf_.insert(pair<string,double>(f,idf_aux));
			  }
			  concatena="d1.txt  d2.txt  d3.txt ";
		  }
           if(indice_invertido.empty())
           {
		   	 indice_invertido.insert(pair<string,string>(f,concatena));
		   }
		   else{
			   n=indice_invertido.count(f);
			   if(n==0)
			   {
			   	 indice_invertido.insert(pair<string,string>(f,concatena));
			   }
		   }
			
			 
		}
		}
	    
	}
	
aux4.clear();

}

void maquinadebusca::tf()
{

	std::map<string,string>::iterator it;
	std::map<string,int>::iterator it2;
	string palavra,anterior=" ";
	int n;
	
	//arq 1
	for(it=arq1_.begin();it!=arq1_.end();it++)
	{
		palavra= it->first;
		n=arq1_.count(palavra);
		if(palavra!=anterior)
		{
			
			arq1_tf.insert(pair<string,int>(palavra,n));
		}
	}
	//arq2
	for(it=arq2_.begin();it!=arq2_.end();it++)
	{
		palavra= it->first;
		n=arq2_.count(palavra);
		if(palavra!=anterior)
		{
			
			arq2_tf.insert(pair<string,int>(palavra,n));
		}
	}
	
	//arq 3
	for(it=arq3_.begin();it!=arq3_.end();it++)
	{
		palavra= it->first;
		n=arq3_.count(palavra);
		if(palavra!=anterior)
		{
			
			arq3_tf.insert(pair<string,int>(palavra,n));
		}
	}

}
void maquinadebusca::coordenada_do_documento()
{
	
std::map<string,double>::iterator it;
std::map<string,int>::iterator it2;
double w;
int k;
double aux;
int sai=0;
it2=arq1_tf.begin();
string palavra,p2;

//arq 1
for(it=idf_.begin();it!=idf_.end();it++)
{
	
	palavra=it->first;
    while(it2!=arq1_tf.end() && sai!=1)
	{
		p2=it2->first;
		
		if(p2==palavra)
		{
			
			sai=1;
			k=it2->second;
			aux=it->second;
			w=k*aux;
		}
		it2++;
	}
	if(sai==0)
	{
		w=0.0;
		wd1.insert(pair<string,double>(palavra,w));
	}
	else{
		wd1.insert(pair<string,double>(palavra,w));
	}
	it2=arq1_tf.begin();
	sai=0;
}	
//arq2
for(it=idf_.begin();it!=idf_.end();it++)
{
	
	palavra=it->first;
    while(it2!=arq2_tf.end() && sai!=1)
	{
		p2=it2->first;
		
		if(p2==palavra)
		{
			
			sai=1;
			k=it2->second;
			aux=it->second;
			w=k*aux;
		}
		it2++;
	}
	if(sai==0)
	{
		w=0.0;
		wd2.insert(pair<string,double>(palavra,w));
	}
	else{
		wd2.insert(pair<string,double>(palavra,w));
	}
	it2=arq2_tf.begin();
	sai=0;
}
//arq3
for(it=idf_.begin();it!=idf_.end();it++)
{
	
	palavra=it->first;
    while(it2!=arq3_tf.end() && sai!=1)
	{
		p2=it2->first;
		
		if(p2==palavra)
		{
			
			sai=1;
			k=it2->second;
			aux=it->second;
			w=k*aux;
		}
		it2++;
	}
	if(sai==0)
	{
		w=0.0;
		wd3.insert(pair<string,double>(palavra,w));
	}
	else{
		wd3.insert(pair<string,double>(palavra,w));
	}
	it2=arq3_tf.begin();
	sai=0;
}

}
