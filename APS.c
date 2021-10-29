#include <stdio.h>
#include <stdlib.h>

/*
Tela de introdução explicando o projeto
	Opções de Iniciar ordenação
        Escolher o tipo de ordenacao
        Voltar
    comparar os 3 tipos de ordenação
    sair
Tela de iniciar ordenação
	Opções de iniciar / pesquisar dado específico / sair
Tela de comparar
	Opções de iniciar comparação / sair
*/

int main()
{
    int programa = 0;
    int subescolha = 0;

    system("cls");
    printf("############## Sistema de controle do Geoprocessamento da Floresta Amazonica ##############\n\n");
    printf("Este programa tem como objetivo utilizar as imagens geradas pelos satelites da floresta \nAmazonica ja catalogadas e ordena-las. Para isso sao utilizados tres metodos de ordenacao, \nonde cada um tem sua singularidade. Tambem e possivel comparar o desempenho dos tres \npara melhor analise.\n\n\n");

    printf("Selecione o tipo de programa a ser iniciado:\n | 1 | Iniciar Ordenacao dos dados \n | 2 | Comparar os tipos de ordenacao de dados \n | 3 | Sair\n");
    scanf("%d", &programa);

    switch (programa)
    {
        case 1:
                printf("Obtendo dados catalogados das imagens capturadas dos satelites...\n");
                printf("Escolha o tipo de ordenacao a ser usada:\n |1| Quick Sort\n |2| Heap Sort\n |3| Comb Sort\n\n |4| Voltar para o menu\n");
                scanf("%d",&subescolha);


        break;
        case 2:
                printf("Hm...");
        break;
        case 3:
                exit(0);
        break;
    }

    return 0;
}

