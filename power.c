
#include "myMath.h"
#include <stdio.h>
#define EXP 2.718281828

double Exponent(int x){
    double temp=1;
    if(x==0)
        return 1;
    if(x>0){
    for(int i=0; i<x; i++){
        temp=temp*EXP;
    }
    }
    else{
      for(int i=0; i>x; i--){
         temp=temp*EXP;
    } 
     temp= 1/temp;
    }
    return temp;
    }

double Power(double x, int y){
   double temp=1;
    if(y==0)
        return 1;
    if(y>0){
    for(int i=0; i<y; i++){
        temp=temp*x;
    }
    }
    else{
        for(int i=0; i>y; i--){
            temp=temp*x;
          }
          temp=1/temp;
    }
    return temp;
}
