#include <stdio.h> 

int main() {
    //  Simulação do Movimento da Torre (usando for) 
    printf(" Movimento da Torre \n");
    int casasTorre = 5; 
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
        contadorBispo++; // 
    }
    printf("\n"); 

    //  Simulação do Movimento da Rainha (usando do-while) 
    printf(" Movimento da Rainha \n");
    int casasRainha = 8; 
    int contadorRainha = 0; 
    printf("A rainha se moverá %d casas para a esquerda.\n", casasRainha);
   
    if (casasRainha > 0) {  {
            printf("Esquerda\n"); 
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); 

    return 0; 
}
