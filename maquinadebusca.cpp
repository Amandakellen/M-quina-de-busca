#include <iostream>
#include <string.h>
#include <fstream>
#include <ctype.h>
#include <map>
#include "maquinadebusca.h"
using std::cout;
using std::endl;
using std::string;
using std::multimap;
using std::pair;


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
}
 void maquinadebusca::lerarquivos()
 {
    std::ifstream in;
    int i=0;
    int indice=0;
    in.open("d1.txt");
    char auxiliar;
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(t1==c1){
 redimensiona(2*c1);
 }else{
  if( isalpha(auxiliar)) {//verifica se é uma letra
    if(isupper(auxiliar)){//verifica se é letra maiscula
	 auxiliar=tolower(auxiliar);
     arq1[indice]=auxiliar;
    }else{arq1[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se é numero
     arq1[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se é espaço
	   arq1[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se é um ponto
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

indice=0;
i=0;
in.open("d2.txt");
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(t2==c2){
 redimensiona(2*c2);
 }else{
  if( isalpha(auxiliar)) {//verifica se é uma letra
    if(isupper(auxiliar)){//verifica se é letra maiscula
	 auxiliar=tolower(auxiliar);
     arq2[indice]=auxiliar;
    }else{arq2[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se é numero
     arq2[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se é espaço
	   arq2[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se é um ponto
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
  if( isalpha(auxiliar)) {//verifica se é uma letra
    if(isupper(auxiliar)){//verifica se é letra maiscula
	 auxiliar=tolower(auxiliar);
     arq3[indice]=auxiliar;
    }else{arq3[indice]=auxiliar;}
  }else{
    if(isdigit(auxiliar)){//verifica se é numero
     arq3[indice]=auxiliar;
     }else{
   	  if(auxiliar==32){//verifica se é espaço
	   arq3[indice]=auxiliar;}else{
             if(ispunct(auxiliar) ){//verifica se é um ponto
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
				  	if(it->second=="d1.txt")
					  {
					  	n=arq1_aux.count(aux3);
					  }
					  else{
						  n=0;
					  }
				  	
				  }
		
			   if(n==0)
			   {
			 	arq1_aux.insert(pair<string,string>(aux3,"d1.txt"));
			   }
	     	
			 }
			 else{
			 
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
		
			   if(n==0)
			   {
			 	arq2_aux.insert(pair<string,string>(aux3,"d2.txt"));
			   }
	     	
			 }
			 else{
			 
				 arq2_aux.insert(pair<string,string>(aux3,"d2.txt"));
				
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
		
			   if(n==0)
			   {
			 	arq3_aux.insert(pair<string,string>(aux3,"d3.txt"));
			   }
	     	
			 }
			 else{
			 
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
       aux4.insert({f,s});
	}
arq2_aux.clear();	

	for(it=arq3_aux.begin();it!=arq3_aux.end();it++)
	{
		f=it->first;
		s=it->second;
       aux4.insert({f,s});
	}
arq3_aux.clear();
string concatena;
string arq=" ";
string ant=" ";
string anterior=" ";
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
		}
		if(n>1)
		{
		  
		   concatena=it->second;
		  if(n==2)
		  {
		  	it2=it++;
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
