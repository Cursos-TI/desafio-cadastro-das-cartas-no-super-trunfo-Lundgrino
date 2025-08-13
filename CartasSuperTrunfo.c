#include <stdio.h>

int main() {
    printf("                Ola, seja bem vindo ao jogo:\n----------------  Super Trunfo de Paises!  ----------------\n        Neste jogo ganha quem possuir a carta mais forte\n -\n -\n -\n -         Sao 22 cartas, divididas da seguinte maneira:\n -\n - 8 estados, cada estado sera representado com uma letra; de A a H \n - Estes estados vao ter um total de 4 cidades q tambem serao representadas, porem com os numeros de : 01 a 04 \n - Aqui vai um Ex: \n - estado de pimpimpom : A \n - cidade pao salgado : 01 \n - O codigo da cidade de Pao salgado do estado de Pimpimpom eh : A01 \n");

    char est1[2], est2[2], cod1[4], cod2[4], cid1[50], cid2[50];
    printf("Escolha um estado e use uma letra de A a H para representalo : \n");
    scanf("%s" , est1);

    printf("\nAgora ponha essa  mesma letra, seguida de um dos numeros de 01 a 04 : \n");
    scanf("%s" , cod1);

     printf("\nQual eh o nome da cidade que voce escolheu? : \n");
    scanf("%s" , cid1);

    int popu1;
    printf("Agora me diga, qual eh o numero de sua populacao? \n");
    scanf("%d" , &popu1);

    float area1;
    printf("O quao extenso ela eh? Ponha a baixo, o numero de sua Area. \n");
    scanf("%f" , &area1);

    float pib1;
    printf("Como vai a economia dessa cidade? me fale o seu PIB \n");
    scanf("%f" , &pib1);

    int turi1;
    printf("Queria turistar la um dia, quantos pontos turitisco ela tem?\n");
    scanf("%d" , &turi1);

    printf("-\n -\n -Boa jogador! Agora vamos para a segunda carta. \n -\n ");
    
    printf("Escolha um estado e use uma letra de A a H para representalo : \n");
    scanf("%s" , est2);

    printf("\nAgora ponha essa  mesma letra, seguida de um dos numeros de 01 a 04 : \n");
    scanf("%s" , cod2);

     printf("\nQual eh o nome da cidade que voce escolheu? : \n");
    scanf("%s" , cid2);

    int popu2;
    printf("Agora me diga, qual eh o numero de sua populacao? \n");
    scanf("%d" , &popu2);

    float area2;
    printf("O quao extenso ela eh? Ponha a baixo, o numero de sua Area. \n");
    scanf("%f" , &area2);

    float pib2;
    printf("Como vai a economia dessa cidade? me fale o seu PIB \n");
    scanf("%f" , &pib2);

    int turi2;
    printf("Queria turistar la um dia, quantos pontos turistico ela tem?\n");
    scanf("%d" , &turi2);

    printf(" - \n -\n - Depois dessa longa jornada, vamos apresentar suas carta ate agora: \n - \n - \n.");

    printf("----------------  Primeira carta:  ---------------- \n - Estado : %s \n - Codigo: %s \n - Nome da Cidade : %s \n - Populacao : %d \n - Area : %.2fkm \n - PIB : %.2fR$ \n - Numero de Pontos Turisticos : %d \n" , est1, cod1 , cid1 , popu1 , area1 , pib1 , turi1);

     printf("----------------  Segunda carta:  ---------------- \n - Estado : %s \n - Codigo: %s \n - Nome da Cidade : %s \n - Populacao : %d \n - Area : %.2fkm \n - PIB : %.2fR$ \n - Numero de Pontos Turisticos : %d \n" , est2, cod2 , cid2 , popu2 , area2 , pib2 , turi2);





return 0;
    
}
