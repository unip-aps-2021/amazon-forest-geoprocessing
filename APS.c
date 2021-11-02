#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ORGANIZAÇÃO / SUGESTÕES

* Tela de introdução explicando o projeto
	- Iniciar ordenação
                .Escolher o tipo de ordenacao
                .Voltar
        - Voltar
* Comparar os 3 tipos de ordenação
        - Opções de iniciar comparação
        - Voltar
Sair

*/

clock_t* StartTimer();
clock_t StopTimer();
void Stop();

int main()
{
    int escolha = 0;
    int subescolha = 0;

//     system("cls");
    printf("############## Sistema de controle do Geoprocessamento da Floresta Amazonica ##############\n\n");
    printf("Este programa tem como objetivo utilizar as imagens geradas pelos satelites da floresta \nAmazonica ja catalogadas e ordena-las. Para isso sao utilizados tres metodos de ordenacao, \nonde cada um tem sua singularidade. Tambem e possivel comparar o desempenho dos tres \npara melhor analise.\n\n\n");

    printf("Selecione o tipo de programa a ser iniciado:\n | 1 | Iniciar Ordenacao dos dados \n | 2 | Comparar os tipos de ordenacao de dados \n | 3 | Sair\n   ");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
                printf("Obtendo dados catalogados das imagens capturadas dos satelites...\n");
                // GetData();
                printf("Escolha o tipo de ordenacao a ser usada:\n |1| Quick Sort\n |2| Heap Sort\n |3| Comb Sort\n\n |4| Voltar para o menu\n  ");
                scanf("%d",&subescolha);
                switch (subescolha)
                {
                        // Seria legal se o usuário pudesse escolher entre ordenar de forma crescente ou decrescente em cada sort e cada sort mostrar uma coisa única (tem q pensar no quê)
                        case 1:
                                clock_t* temporizador1 = StartTimer();

                                Stop(1050); // Está interrompendo o programa por 1 segundo e 50 milissegundos

                                clock_t tempoTotal = StopTimer(temporizador1);

                                printf("Tempo total = %d segundos e %d milissegundos.\n", tempoTotal / CLOCKS_PER_SEC, tempoTotal % 1000);
                                // QuickSort();
                        break;
                        case 2:
                                // HeapSort();
                                Stop();
                        break;
                        case 3:
                                // CombSort();
                        break;
                        case 4:
                                escolha = 0;
                                subescolha = 0;
                        break;
                        default:
                                printf("Opcao invalida...");
                        break;
                }
        break;
        case 2:
                printf("Obtendo dados catalogados das imagens capturadas dos satelites...\n");
                // GetData();
                printf("O protocolo de comparacao dos algoritmos fara a ordenacao dos dados com 3 algoritmos de ordenacao e \nmostrara alguns dados de performance que podem ser utilizados como criterio para um uso mais objetivo.\n\n");
                printf("Tem q ve em grupo como q a gente vai fazer a comparacao (se vai ser os 3 algoritmos trabalhando ao msm tempo, se vai ser 1 de cada vez; oq q vai mostrar pro usuario, etc)\n");
                // Compare();
        break;
        case 3:
                exit(0);
        break;
    }
    return 0;
}

// Usado para pausar a execução do programa por um determinado tempo em milissegundos (passado como parâmetro)
void Stop(int duracao)
{
        int msec = 0;
        clock_t before = clock();

        do
        {
                clock_t difference = clock() - before;
                msec = difference * 1000 / CLOCKS_PER_SEC;
        } while (msec < duracao);
}

// Usado para iniciar um temporizador. Retorna um número do tipo clock_t* que deve ser armazenado para o uso da função StopTimer().
clock_t* StartTimer()
{
        clock_t* tempo = malloc(sizeof(clock_t));
        *tempo = clock();
        return tempo;
}

// Usado para finalizar a contagem de um temporizador. Retorna um número do tipo clock_t que pode ser usado para calcular o tempo passado em segundos e milissegundos.
clock_t StopTimer(clock_t* timer)
{
        clock_t total = clock() - *timer;
        return total;
        free(timer);
        // Para obter os segundos usados, usa-se 'total / CLOCKS_PER_SEC'   ___  Para obter os milisseundos, usa-se 'total%1000'
}