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
              if(auxiliar==33){arq1[indice]=auxiliar;}
              else{
                 if(auxiliar==44){arq1[indice]=auxiliar;}
                 else{ 
	              if(auxiliar==58){arq1[indice]=auxiliar;}
                  else{
                    if(auxiliar==46){arq1[indice]=auxiliar;}
                    else{
                      if(auxiliar==59){arq1[indice]=auxiliar;}
                      else{
	                    if(auxiliar==63){arq1[indice]=auxiliar;}
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

in.open("d2.txt");
i=0;
indice=0;
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
              if(auxiliar==33){arq2[indice]=auxiliar;}
              else{
                 if(auxiliar==44){arq2[indice]=auxiliar;}
                 else{ 
	              if(auxiliar==58){arq2[indice]=auxiliar;}
                  else{
                    if(auxiliar==46){arq2[indice]=auxiliar;}
                    else{
                      if(auxiliar==59){arq2[indice]=auxiliar;}
                      else{
	                    if(auxiliar==63){arq2[indice]=auxiliar;}
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

in.open("d3.txt");
i=0;
indice=0;
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
              if(auxiliar==33){arq3[indice]=auxiliar;}
              else{
                 if(auxiliar==44){arq3[indice]=auxiliar;}
                 else{ 
	              if(auxiliar==58){arq3[indice]=auxiliar;}
                  else{
                    if(auxiliar==46){arq3[indice]=auxiliar;}
                    else{
                      if(auxiliar==59){arq3[indice]=auxiliar;}
                      else{
	                    if(auxiliar==63){arq3[indice]=auxiliar;}
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
for(int i=0;i<t1;i++){
 aux=arq1[i];
 
   if(aux!=" " && aux!=","&& aux!="." && aux!="!" && aux!=":" && aux!=";" && aux!="?")
    {
      if(i==0){aux3=aux;}
	   else{aux3=aux3+aux;}
        aux="";   
    }
    else
    {
    	
	   if(aux=="." &&aux=="," && aux=="." && aux=="!" && aux==":" && aux==";" && aux=="?" )
	   {
	   	indice_invertido.insert(pair<string,string>(aux,"arq1"));
	   }
	   else{
		   indice_invertido.insert(pair<string,string>(aux3,"arq1"));
		   aux3="";
	   }
	}
    

    }

}
