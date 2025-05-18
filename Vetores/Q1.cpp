#include <stdio.h>

int main() {
    float notas[10], soma = 0, media;
    int i, acima = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / 10;
    
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            acima++;
        }
    }
    
    printf("%d alunos tiveram notas acima da media %.2f\n", acima, media);
    return 0;
}