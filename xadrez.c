#include <stdio.h> 

int main() {
    //  Simulação do Movimento da Torre (usando for) 
    printf(" Movimento da Torre \n");
    int casasTorre = 5; // Número de casas que a torre vai mover
    printf("A torre se moverá %d casas para a direita.\n", casasTorre);
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); 
    }
    printf("\n"); 

    //  Simulação do Movimento do Bispo (usando while) 
    printf(" Movimento do Bispo \n");
    int casasBispo = 5; 
    int contadorBispo = 0; 
    printf("O bispo se moverá %d casas na diagonal para cima e à direita.\n", casasBispo);
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); 
        contadorBispo++; 
    }
    printf("\n"); 

    //  Simulação do Movimento da Rainha (usando do-while) 
    printf(" Movimento da Rainha \n");
    int casasRainha = 8; 
    int contadorRainha = 0; 
    printf("A rainha se moverá %d casas para a esquerda.\n", casasRainha);
    // O loop do-while garante que a instrução seja executada pelo menos uma vez,
    if (casasRainha > 0) { // 
{
            printf("Esquerda\n"); 
            contadorRainha++; 
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); 

    //  Simulação do Movimento do Cavalo (usando loops aninhados: for e while) 
    printf(" Movimento do Cavalo \n");

    int movimentosVerticaisCavalo = 2; 
    int movimentosHorizontaisCavalo = 1; 

    printf("O cavalo se moverá %d casas para baixo e %d casa para a esquerda.\n",
           movimentosVerticaisCavalo, movimentosHorizontaisCavalo);

    // Loop externo: simula o movimento vertical (2 casas para baixo)
    for (int i = 0; i < movimentosVerticaisCavalo; i++) {
        printf("Baixo\n"); // Imprime o movimento para baixo
    }

    int contadorHorizontalCavalo = 0;
    while (contadorHorizontalCavalo < movimentosHorizontaisCavalo) {
        printf("Esquerda\n"); 
        contadorHorizontalCavalo++;
    }

    printf("\n"); 

    return 0; //
}
