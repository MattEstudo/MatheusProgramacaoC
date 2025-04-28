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
