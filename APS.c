#include <stdio.h>
#include <curl.h>

/*
Tela de introdução explicando o projeto
	Opções de Iniciar ordenação / comparar os 3 tipos de ordenação / sair
Tela de iniciar ordenação
	Opções de iniciar / pesquisar dado específico / sair
Tela de comparar
	Opções de iniciar comparação / sair
*/

int main()
{
    printf("############## Sistema de controle do Geoprocessamento da Floresta Amazonica  ##############\n\n");
    printf("Esse programa tem como objetivo processar as imagens geradas pelos satélites da floresta ");
    print("parte do fravin");
    printf("BBB");
    printf("Parte do maico");
}

<<<<<<< HEAD
void teDaUmSacode()
{
    int a = 1;
    int b = 2;

    print("Vo te dá um sacode %d Vezes", a+b);
=======
void curl() {
    CURL* req = curl_easy_init();
    CURLcode res;
    if (req)
    {
        curl_easy_setopt(req, CURLOPT_URL, "www.queimadas.dgi.inpe.br/queimadas/users/dados_abertos/focos/10min/");
        curl_easy_setopt(req, CURLOPT_FOLLOWLOCATION, 1L);
        //      curl_easy_setopt(req, CURLOPT_HTTPGET, "www.queimadas.dgi.inpe.br/queimadas/users/dados_abertos/focos/10min/");
        res = curl_easy_perform(req);
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_operation() failed : %s\n", curl_easy_strerror(res));
        }
    }
    curl_easy_cleanup(req);
>>>>>>> teste2
}