#include <stdio.h>

int main(){
    char estado[1];
    char codigo[5];
    char nome[30];
    int populacao;
    int numerodepontosturisticos;
    float area;
    float PIB1;
    float densidadepopulacional;
    float PIBpercapita;
    float superpoder;
    //--------------------------------//
    char ESTADO[1];
    char CODIGO[5];
    char NOME[30];
    int POPULACAO;
    int NUMERODEPONTOSTURISTICOS;
    float AREA;
    float PIB2;
    float DENSIDADEPOPULACIONAL;
    float PIBPERCAPITA;
    float SUPERPODER;
    //--------------------------------//
    int opcao, opcao2;
    int resultado, resultado2;
    int resultado3;

    /*separei as informações de cada cidade deixando uma em letras minusculas
    e a outra em letras maiusculas(menos o PIB que deixei com PIB 1 e PIB 2)*/

    printf("digite o estado: \n");
    scanf("%c", &estado); 

    printf("digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("digite a area da cidade: \n");
    scanf("%f", &area);

    printf("digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numerodepontosturisticos);

    printf("digite o PIB da cidade: \n");
    scanf("%f", &PIB1);

    densidadepopulacional = populacao/area;
    PIBpercapita = PIB1/populacao;
    superpoder = populacao+ area +PIB1 +numerodepontosturisticos +PIBpercapita - densidadepopulacional;
    //-------------------------------------------------------

    printf("digite o estado 2: \n");
    scanf("%c", &ESTADO); //pulou esta etapa por algum motivo
    
    printf("digite o codigo da cidade 2: \n");
    scanf("%s", &CODIGO);

    printf("digite o nome da cidade 2: \n");
    scanf("%s", &NOME);

    printf("digite a populacao da cidade 2: \n");
    scanf("%d", &POPULACAO);

    printf("digite a area da cidade 2: \n");
    scanf("%f", &AREA);

    printf("digite o numero de pontos turisticos da cidade 2: \n");
    scanf("%d", &NUMERODEPONTOSTURISTICOS);

    printf("digite o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    DENSIDADEPOPULACIONAL = POPULACAO/AREA;
    PIBPERCAPITA = PIB2/POPULACAO;
    SUPERPODER = (float)(POPULACAO +AREA +PIB2 +NUMERODEPONTOSTURISTICOS +PIBPERCAPITA - DENSIDADEPOPULACIONAL);
    printf("-------------------------\n");//separação das informações

    printf("carta 1 \n");

    printf("Estado: %c \n", estado);
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao da cidade: %d \n", populacao);
    printf("Area da cidade: %.2f km2\n", area);
    printf("Numero de pontos turisticos: %d \n", numerodepontosturisticos);
    printf("PIB da cidade: %.2f Reais\n", PIB1);
    printf("Densidade populacional: %.2f \n", densidadepopulacional);
    printf("PIB per capita: %.2f \n",PIBpercapita);
    printf("Super Poder: %.2f \n", superpoder);
    printf("-------------------------\n");//separação das informações

    printf("carta 2 \n");

    printf("Estado: %c \n", ESTADO);
    printf("Codigo da cidade: %s \n", CODIGO);
    printf("Nome da cidade: %s \n", NOME);
    printf("Populacao da cidade: %d \n", POPULACAO);
    printf("Area da cidade: %.2f km2\n", AREA);
    printf("Numero de pontos turisticos: %d \n", NUMERODEPONTOSTURISTICOS);
    printf("PIB da cidade: %.2f Reais\n", PIB2);
    printf("Densidade populacional: %.2f \n", DENSIDADEPOPULACIONAL);
    printf("PIB per capita: %.2f \n",PIBPERCAPITA);
    printf("Super Poder: %.2f \n", SUPERPODER);

    printf("-------------------------\n");//separação das informações
    printf("Comparação das cartas\n");//separação das informações
    printf("                         \n");//separação das informações
    
    printf("Menu de Comparação\n");
    printf("1. População\n");
    printf("2. Area da Cidade\n");
    printf("3. Pontos Turísticos\n");
    printf("4. PIB da Cidade\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha qual primeiro atributo tu quer comparar: \n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: 
    resultado = populacao > POPULACAO ? 1 : 0;
    break;

    case 2:
    resultado = area > AREA ? 1 : 0;
    break;

    case 3:
    resultado = numerodepontosturisticos > NUMERODEPONTOSTURISTICOS ? 1 : 0;
    break;
    
    case 4:
    resultado = PIB1 > PIB2 ? 1 : 0;
    break;
    
    case 5:
    resultado = densidadepopulacional < DENSIDADEPOPULACIONAL ? 1 : 0;
    break;
    
    default:
    printf("opção inválida!\n");
    break;
    }
    //---------------------------------------------------------//
    /*utilizei o if para apagar a opção ja escolhida
    pelo o usuario anteriomente*/
    printf("----------------------------------------------\n");
    printf("Menu de Comparação\n");
    if (opcao==1)
    {}else {printf("1. População\n");};
    
    if (opcao==2)
    {}else {printf("2. Area da Cidade\n");};

    if (opcao==3)
    {}else {printf("3. Pontos Turísticos\n");};

    if (opcao==4)
    {}else {printf("4. PIB da Cidade\n");};

    if (opcao==5)
    {}else {printf("5. Densidade Demográfica\n");};

    printf("Escolha qual segundo atributo tu quer comparar: \n");
    scanf("%d", &opcao2);
    //---------------------------------------------------------//
    /*ficou meio confuso mas decidi usar o if para incluir um break
    dentro do switch para fazer o sistema parar caso o usuario escolha
    o mesmo atributo duas vezes*/
    switch (opcao2) {
    case 1: 
    if (opcao==opcao2)
    {printf("Opção inválida");        
    break; 
    }else {
    resultado2 = populacao > POPULACAO ? 1 : 0; }
    break;
    
    case 2:
    if (opcao==opcao2)
    {printf("Opção inválida");
    break;
    }else {
    resultado2 = area > AREA ? 1 : 0;}
    break;
    
    case 3:
    if (opcao==opcao2)
    {printf("Opção inválida");
    break;
    }else {
    resultado2 = numerodepontosturisticos > NUMERODEPONTOSTURISTICOS ? 1 : 0;}
    break;
        
    case 4:
    if (opcao==opcao2)
    {printf("Opção inválida");
    break;
    }else {
    resultado2 = PIB1 > PIB2 ? 1 : 0;}
    break;
        
    case 5:
    if (opcao==opcao2)
    {printf("Opção inválida");
    break;
    }else {
    resultado2 = densidadepopulacional < DENSIDADEPOPULACIONAL ? 1 : 0;}
    break;
        
    default:
    printf("opção inválida!\n");
    break;
    }
    
    //printf("resultado = %d\n", resultado);
    //printf("resultado2 = %d\n", resultado2);

    resultado3 = resultado + resultado2;
    
    if(resultado3 == 2){
        printf("carta 1 venceu!\n");
    } else if(resultado3 == 1){
        printf("o jogo empatou!\n");
    } else {
        printf("carta 2 venceu!\n");
    }

    return 0;
}