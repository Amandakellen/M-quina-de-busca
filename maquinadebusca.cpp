#include <iostream>
#include <string.h>
#include <fstream>
#include <ctype.h>

#include "maquinadebusca.h"
using std::cout;
using std::endl;
using std::string;

maquinadebusca::maquinadebusca()
{
	c1=100;
	c2=100;
	c3=100;
	arq1=new string[c1];
	arq2=new string[c2];
	arq3=new string[c3];
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
    if(i>c1){		
      string *aux=new string[c1*2];
      for(int j=0;i<(c1*2);j++){
        aux[j]=arq1[j];
      }
			delete []arq1;
			c1=c1*2;
			arq1=aux;
    }else{
      if( isalpha(auxiliar)) {//verifica se é uma letra
       if(isupper(auxiliar)){//verifica se é letra maiscula
			auxiliar=tolower(auxiliar);
            arq1[indice]=auxiliar;
       }else{
         arq1[indice]=auxiliar;
        }
      }else{
        if(isdigit(auxiliar)){//verifica se é numero
	      arq1[indice]=auxiliar;
        }else{
        	if(auxiliar==32){//verifica se é espaço
			 arq1[indice]=auxiliar;	
			}
			else{
             if( auxiliar==46){//verifica se é .
       	     arq1[indice]=auxiliar;
             }
             if( auxiliar==33){//verifica se é !
       	     arq1[indice]=auxiliar;
             }
             if( auxiliar==44){//verifica se é ,
       	     arq1[indice]=auxiliar;
             }
             if( auxiliar==58){//verifica se é :
       	     arq1[indice]=auxiliar;
             }
             if( auxiliar==59){//verifica se é ;
       	     arq1[indice]=auxiliar;
             }
             if( auxiliar==63){//verifica se é ?
       	     arq1[indice]=auxiliar;
             }
			 
			}
          
         }
      }
    i++;
    indice++;
	}
		
  }
}
in.close();

in.open("d2.txt");
i=0;
indice=0;
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(i>c2){		
      string *aux=new string[c2*2];
      for(int j=0;i<(c2*2);j++){
        aux[j]=arq1[j];
      }
			delete []arq2;
			c2=c2*2;
			arq2=aux;
 }else{
  if( isalpha(auxiliar)) {//verifica se é uma letra
    if(isupper(auxiliar)){//verifica se é letra maiscula
	 auxiliar=tolower(auxiliar);
     arq2[indice]=auxiliar;
    }else{
     arq2[indice]=auxiliar;
     }
      }else{
        if(isdigit(auxiliar)){//verifica se é numero
	      arq2[indice]=auxiliar;
        }else{
        	if(auxiliar==32){//verifica se é espaço
			 arq2[indice]=auxiliar;	
			}
			else{
             if( auxiliar==46){//verifica se é .
       	     arq2[indice]=auxiliar;
             }
             if( auxiliar==33){//verifica se é !
       	     arq2[indice]=auxiliar;
             }
             if( auxiliar==44){//verifica se é ,
       	     arq2[indice]=auxiliar;
             }
             if( auxiliar==58){//verifica se é :
       	     arq2[indice]=auxiliar;
             }
             if( auxiliar==59){//verifica se é ;
       	     arq2[indice]=auxiliar;
             }
             if( auxiliar==63){//verifica se é ?
       	     arq2[indice]=auxiliar;
             }
			 
			}
         }
      }
    i++;
    indice++;
	}
 }
}
in.close();

in.open("d3.txt");
i=0;
indice=0;
if(in.is_open()){
while((auxiliar=in.get())!=EOF){
 if(i>c3){		
      string *aux=new string[c3*2];
      for(int j=0;i<(c3*2);j++){
        aux[j]=arq3[j];
      }
			delete []arq3;
			c3=c3*2;
			arq3=aux;
 }else{
  if( isalpha(auxiliar)) {//verifica se é uma letra
    if(isupper(auxiliar)){//verifica se é letra maiscula
	 auxiliar=tolower(auxiliar);
     arq3[indice]=auxiliar;
    }else{
     arq3[indice]=auxiliar;
     }
      }else{
        if(isdigit(auxiliar)){//verifica se é numero
	      arq3[indice]=auxiliar;
        }else{
        	if(auxiliar==32){//verifica se é espaço
			 arq3[indice]=auxiliar;	
			}
			else{
             if( auxiliar==46){//verifica se é .
       	     arq3[indice]=auxiliar;
             }
             if( auxiliar==33){//verifica se é !
       	     arq3[indice]=auxiliar;
             }
             if( auxiliar==44){//verifica se é ,
       	     arq3[indice]=auxiliar;
             }
             if( auxiliar==58){//verifica se é :
       	     arq3[indice]=auxiliar;
             }
             if( auxiliar==59){//verifica se é ;
       	     arq3[indice]=auxiliar;
             }
             if( auxiliar==63){//verifica se é ?
       	     arq3[indice]=auxiliar;
             }
			 
			}
         }
      }
    i++;
    indice++;
	}
 }
}
in.close();


}