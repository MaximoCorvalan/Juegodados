#ifndef CONTNUM_H_INCLUDED
#define CONTNUM_H_INCLUDED
#include <iostream>
#include "funcion.h"
int cont[6]={0};
int contnum(int [],int cont[]);
int contnum(int vec[],int cont[]){
int j,i,puntaje,num;
for ( i=0;i<6;i++){
        if(vec[i]==1){
        cont[0]++;
        }else if(vec[i]==2){
        cont[1]++;
        }else if(vec[i]==3){
        cont[2]++;
        }else if(vec[i]==4){
        cont[3]++;
        }else if(vec[i]==5){
        cont[4]++;
        }else if(vec[i]==6){
        cont[5]++;
        }
        }

}
#endif // CONTNUM_H_INCLUDED
