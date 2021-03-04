#ifndef Register_h
#define Register_h

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char * string;

typedef struct Itens_empresa{

    string nome_item;
    string preço_item;
    string descrição;
    struct Itens_empresa *prox;

}itens_empresa;

typedef struct Itens_cliente{

    string nome_item;
    string preço_item;
    string descrição;
    struct Itens_cliente *prox;

}itens_cliente;

typedef struct Lista{

    itens_empresa* lista_empresa;
    struct Lista *prox;

}lista;

typedef struct Compras{
    itens_cliente* compras_cliente;;
    struct Compras* prox;


}compras_user;

typedef struct Info{

    //If tipo == Empresa
    string nome_empresa;
    //else
    string nome_usuario;

    //Provavelmente um arquivo FILE.txt

}info;

typedef struct Registro{

    char tipo;
    string user;
    string senha;
    info *InfoUser;
    struct Registro* prox;
}registro;



#endif