#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "Database.h"
void pausarExecucao() {
	printf("pressione <ENTER> para continuar");
	getchar();
	fflush(stdin);
	system("cls");
}
void cadastro1() {
    char CNPJ[15];
    char nomeEmpresa[19];
    char idadeEmpresa[5];
    char senha[20]; 
    char pin[5];
    char telefone[10]; 
    char CEP[9];
    float saldo = 0;
    float credito = 0;
 
    printf("\nPor favor, digite o nome da empresa: ");
    gets(nomeEmpresa);

    
    do {
        printf("\nPor favor, digite o CNPJ (14 digitos): ");
        scanf("%s", CNPJ);

        if (strlen(CNPJ) == 14) {
            printf("CNPJ valido.\n");
            pausarExecucao();
            break;
        } else {
            printf("CNPJ invalido. Por favor, digite novamente.\n");
            pausarExecucao();
        }
    } while (1);

    printf("\nPor favor, digite a idade da empresa: ");
    gets(idadeEmpresa);


    do {
        printf("\nPor favor, digite o telefone (8 digitos): ");
        gets(telefone);

        if (strlen(telefone) == 8) {
            printf("Telefone valido.\n");
            pausarExecucao();
            break;
        } else {
            printf("Telefone invalido. Por favor, digite novamente.\n");
            pausarExecucao();
        }
    } while (1);

    
    do {
        printf("\nPor favor, crie uma senha (minimo 8 caracteres): ");
        gets(senha);
        if (strlen(senha) >= 8) {  
            printf("Senha validada!!\n");
            pausarExecucao();
            break;
        } else {
            printf("Senha invalida. Digite novamente.\n");
            pausarExecucao();
        }
    } while (1);
    do {
        printf("\nPor favor, coloquei o pin : ");
        gets(pin);
        if (strlen(pin) == 4) {  
            printf("pin validado!!\n");
            pausarExecucao();
            break;
        } else {
            printf("Pin invalido. Digite novamente.\n");
            pausarExecucao();
        }
    } while (1);
    do {
        printf("\nPor favor, coloque o cep: ");
        gets(CEP);
        if (strlen(CEP) == 8) {  
            printf("Cep validada!!\n");
            pausarExecucao();
            break;
        } else {
            printf("Cep invalida. Digite novamente.\n");
            pausarExecucao();
        }
    } while (1);

    system("cls");
	
	printf("Cadastro finalizado");
	pausarExecucao();
	
	   
    system("cls");
    printf("\nO seu saldo e: %.2f\n", saldo);  
    pausarExecucao();
	
	insert_client_legal_entire(nomeEmpresa, senha, pin, idadeEmpresa, CNPJ, telefone, CEP, saldo, credito); 
}
