#include "shell.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;


char **parsear(string linea){
  char **instruccion;
  
  return instruccion 
}

int main(){

    char **instruccion;
    string linea;
    int estado = 0;
    
    do{
      printf("myshell:~$ ");
      if (instruccion[1] != NULL){
        linea = instruccion[1] ;
      }else{
        getline(cin,linea);
      }
      instruccion=parsear(linea);
      estado = ejecutar(instruccion);

    }while (estado);
    
    
    return 0;
}