#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio listaTerritorios[MAX_TERRITORIOS];
    int i;

    printf("🗺️ === Sistema de Cadastro de Territórios === 🗺️\n\n");
    printf("Você irá cadastrar %d territórios. Por favor, insira as informações solicitadas.\n\n", MAX_TERRITORIOS);

    // --- ENTRADA DE DADOS ---
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("--- Cadastro do Território %d de %d ---\n", i + 1, MAX_TERRITORIOS);
        
        printf("Nome do Território (máx. 29 caracteres, sem espaços): ");
        if (scanf("%29s", listaTerritorios[i].nome) != 1) {
            printf("Erro na leitura do nome. Encerrando.\n");
            return 1;
        }

        printf("Cor do Exército (máx. 9 caracteres): ");
        if (scanf("%9s", listaTerritorios[i].cor) != 1) {
            printf("Erro na leitura da cor. Encerrando.\n");
            return 1;
        }

        printf("Quantidade de Tropas (inteiro): ");
        if (scanf("%d", &listaTerritorios[i].tropas) != 1) {
             printf("Entrada inválida para tropas. Usando 0 tropas.\n");
             listaTerritorios[i].tropas = 0;
             while (getchar() != '\n'); 
        }
        
        printf("\n"); 
    }

    // --- EXIBIÇÃO DE DADOS ---
    printf("✅ === Dados dos Territórios Cadastrados === ✅\n");
    
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);
        printf("Nome:   %s\n", listaTerritorios[i].nome);
        printf("Cor:    %s\n", listaTerritorios[i].cor);
        printf("Tropas: %d\n", listaTerritorios[i].tropas);
    }
    
    printf("\n=== Fim do Relatório ===\n");

    return 0;
}
