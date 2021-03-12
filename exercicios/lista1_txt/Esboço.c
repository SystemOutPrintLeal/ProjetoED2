#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

int printTXT(FILE * arq,String name){

    arq = fopen(name,"w");
    if(!arq){
        printf("\nError\n");
        return 1;
    }
    fclose(arq);
    return 0;
}

int addTXT(FILE * arq,String name){

    char text[1024];
    arq = fopen(name,"a");
    if(!arq){
        printf("\nError\n");
        return 1;
    }
    else{
        printf("\nUse underline instead of backspace\n");
        printf("\nwrite the text here: ");
        scanf("%s",text);
        fwrite(text,sizeof(String),1024,arq);
        fclose(arq);
    }
}

int readTXT(FILE * arq,String name){
    
    arq = fopen(name,"r");
    if(!arq){
        printf("Error");
        return 1;
    }
    char text[1024];
    fscanf(arq,"%s",text);
    printf("\nTexto.bin : %s\n",text);

}

int main(){
    FILE * arq;
    char name[909];
    fflush(stdin);
    printf("Archives name: ");
    gets(name);
    strcat(name,".txt");
    printTXT(arq,name);
    addTXT(arq,name);
    readTXT(arq,name);
   
    return 0;
}