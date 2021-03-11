#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int printTXT(FILE * arq,String name){

    arq = fopen(name,"w");
    if(arq == NULL){
        printf("\nError\n");
    }
    else{
        fclose(arq);
        printf("\nfinalizando...\n");
    }
    return 0;
}

void main(){
    FILE * arq;
    char name[909];
    fflush(stdin);
    printf("Archives name:");
    scanf("%s",name);
    strcat(name,".txt");
    printTXT(arq,name);
}