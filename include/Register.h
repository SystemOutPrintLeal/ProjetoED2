#ifndef Register_h
#define Register_h

//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char * string;

//Perfil empresa
typedef struct Itens_empresa{

    string nome_item;
    string preço_item;
    string descrição;
    struct Itens_empresa *prox;

}itens_empresa;

//Perfil cliente
typedef struct Itens_cliente{

    string nome_item;
    string preço_item;
    string descrição;
    struct Itens_cliente *prox;

}itens_cliente;

//Perfil empresa
typedef struct Lista{

    itens_empresa* lista_empresa;
    struct Lista *prox;

}lista_empresa;

//Perfil cliente
typedef struct Compras{

    itens_cliente* compras_cliente;
    struct Compras* prox;

}compras_user;

//Perfil Padrão
typedef struct Info{

    //If tipo == Empresa
    string nome_empresa;
    //else
    string nome_usuario;
    string sexo;
    string numero_telefone;
    string endereço;
    //Provavelmente um arquivo FILE.txt

}info;

typedef struct Registro{

    char tipo;
    string user;
    string senha;
    info *InfoUser;
    struct Registro* prox;

}registro;

//Header funções para manipulação dos itens diretamente na memoria
//Init
itens_empresa* initItens_empresa();
itens_cliente* initItens_cliente();
lista_empresa* initLista_empresa();
compras_user* initCompras_user();
info* initInfo();
registro* initRegistro();

//Registra
//Falta add parametros
itens_empresa* registraItens_empresa();
itens_cliente* registraItens_cliente();
lista_empresa* registraLista_empresa();




#endif