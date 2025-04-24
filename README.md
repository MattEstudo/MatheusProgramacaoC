#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    unsigned int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    float PIB;
    unsigned int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;
    float super_poder;
};

void calcularDensidadeEPIB(struct Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->PIB_per_capita = carta->PIB * 1000000 / carta->populacao; // Convertendo PIB para milhões
}

void calcularSuperPoder(struct Carta *carta) {
    carta->super_poder = carta->populacao + carta->area + carta->PIB * 1000000 + 
                         carta->pontos_turisticos + carta->PIB_per_capita + 
                         (1 / carta->densidade_populacional);
}

int main() {
    struct Carta carta1, carta2;
    
    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (sigla): ");
    scanf("%2s", carta1.estado);
    printf("Código: ");
    scanf("%u", &carta1.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em milhões de US$): ");
    scanf("%f", &carta1.PIB);
    printf("Número de pontos turísticos: ");
    scanf("%u", &carta1.pontos_turisticos);
    
    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (sigla): ");
    scanf("%2s", carta2.estado);
    printf("Código: ");
    scanf("%u", &carta2.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em milhões de US$): ");
    scanf("%f", &carta2.PIB);
    printf("Número de pontos turísticos: ");
    scanf("%u", &carta2.pontos_turisticos);
    
    // Cálculos para ambas as cartas
    calcularDensidadeEPIB(&carta1);
    calcularDensidadeEPIB(&carta2);
    
    calcularSuperPoder(&carta1);
    calcularSuperPoder(&carta2);
    
    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    
    // População
    printf("População: Carta %d venceu (%d)\n", 
           (carta1.populacao > carta2.populacao) ? 1 : 2,
           (carta1.populacao > carta2.populacao) ? 1 : 0);
    
    // Área
    printf("Área: Carta %d venceu (%d)\n", 
           (carta1.area > carta2.area) ? 1 : 2,
           (carta1.area > carta2.area) ? 1 : 0);
    
    // PIB
    printf("PIB: Carta %d venceu (%d)\n", 
           (carta1.PIB > carta2.PIB) ? 1 : 2,
           (carta1.PIB > carta2.PIB) ? 1 : 0);
    
    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2,
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);
    
    // Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2,
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 0);
    
    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (carta1.PIB_per_capita > carta2.PIB_per_capita) ? 1 : 2,
           (carta1.PIB_per_capita > carta2.PIB_per_capita) ? 1 : 0);
    
    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (carta1.super_poder > carta2.super_poder) ? 1 : 2,
           (carta1.super_poder > carta2.super_poder) ? 1 : 0);
    
    return 0;
}
