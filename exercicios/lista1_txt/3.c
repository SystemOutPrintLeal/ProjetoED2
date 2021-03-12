//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* String;

//Init BIN
int printBIN(FILE * arq,String name){

    arq = fopen(name,"wb");
    if(!arq){
        printf("\nError\n");
        return 1;
    }
    fclose(arq);
    return 0;
}

//return lengh  
int lenghBIN(FILE* arq, String name){

    arq = fopen(name,"rb");
    if(!arq){
        printf("\nError fopen\n");
        exit(1);
    }
    fseek(arq,0,SEEK_END);
    long lengh = ftell(arq);

    if(lengh == -1){
        printf("\nError fseek\n");
        exit(1);
    }
    fclose(arq);
    return lengh;
}

//add text
int addBIN(FILE * arq,String name){

    char text[1024];
    arq = fopen(name,"ab");
    if(!arq){
        printf("\nError\n");
        return 1;
    }
    else{
        printf("\nUse underline instead of backspace\n");
        printf("\nwrite the text here: ");
        fgets(text,1024,stdin);
        fwrite(text,sizeof(String),1024,arq);
        fclose(arq);
    }
}


int main(){

    FILE * arq;
    char name[909];
    fflush(stdin);
    printf("Archives name: ");
    fgets(name,909,stdin);
    strcat(name,".bin");
    printBIN(arq,name);
    addBIN(arq,name);
    long lengh = lenghBIN(arq,name);
    printf("\nBinary lengh : %ld\n",lengh);

}