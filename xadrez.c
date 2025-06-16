#include <stdio.h> 

void moverTorreRecursivo(int casas) {
    // Caso base: se não houver mais casas para mover, a recursão para.
    if (casas <= 0) {
        return;
    }
    printf("Direita\n"); 
    moverTorreRecursivo(casas - 1); // Chamar a função recursivamente para a próxima casa
}

void moverRainhaRecursivo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n"); // Imprime a direção do movimento
    moverRainhaRecursivo(casas - 1); // Chamar a função recursivamente para a próxima casa
}

void moverBispoRecursivoComLoopsAninhados(int casas) {
    if (casas <= 0) {
        return;
    }

    for (int i = 0; i < 1; i++) { // Loop para mover uma casa verticalmente
        for (int j = 0; j < 1; j++) { // Loop para mover uma casa horizontalmente
            printf("Cima, Direita\n"); // Imprime a combinação das direções para a diagonal
        }
    }
    moverBispoRecursivoComLoopsAninhados(casas - 1); // Chamar a função recursivamente para a próxima casa
}


int main() {
    //  Simular Movimento da Torre 
    printf(" Movimento da Torre \n");
    int casasTorre = 5; // 
    printf("A torre se moverá %d casas para a direita.\n", casasTorre);
    moverTorreRecursivo(casasTorre);
    printf("\n"); 

    //  Simulação do Movimento do Bispo (usando recursividade e loops aninhados) 
    printf(" Movimento do Bispo (Recursivo com Loops Aninhados) \n");
    int casasBispo = 5; 
    printf("O bispo se moverá %d casas na diagonal para cima e à direita.\n", casasBispo);
    moverBispoRecursivoComLoopsAninhados(casasBispo);
    printf("\n"); 

    //  Simulação do Movimento da Rainha 
    printf(" Movimento da Rainha (Recursivo) \n");
    int casasRainha = 8; 
    printf("A rainha se moverá %d casas para a esquerda.\n", casasRainha);
    moverRainhaRecursivo(casasRainha);
    printf("\n"); 

    //  Simulação do Movimento do Cavalo (usando loops aninhados complexos)
    printf(" Movimento do Cavalo (Loops Aninhados Complexos) \n");

    int moveVertical = 0; // Contador para o movimento vertical
    int moveHorizontal = 0; // Contador para o movimento horizontal
    int limiteVertical = 2; // Duas casas para cima
    int limiteHorizontal = 1; // Uma casa para a direita
    
    printf("O cavalo se moverá %d casas para cima e %d casa para a direita.\n",
           limiteVertical, limiteHorizontal);

    // Loop externo para o movimento vertical 
    for (moveVertical = 0; moveVertical < limiteVertical; moveVertical++) {
        printf("Cima\n"); 
      
    }

    while (moveHorizontal < limiteHorizontal) {
        printf("Direita\n");
        moveHorizontal++;
    }

    printf("\n"); 

    return 0; 
}
