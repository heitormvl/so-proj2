#include <stdio.h>

// Estrutura para representar uma pessoa
typedef struct {
    int chegada;
    int direcao;
} Pessoa;

int main() {
    int N;
    scanf("%d", &N);

    Pessoa pessoas[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &pessoas[i].chegada, &pessoas[i].direcao);
    }

    int tempoAtual = 0;
    int direcaoAtual = -1; // -1 indica que a escada está parada
    int tempoFinal = 0;
    int ultimaSaida = 0;

    for (int i = 0; i < N; i++) {
        int chegada = pessoas[i].chegada;
        int direcao = pessoas[i].direcao;

        // Atualiza o tempo atual para o tempo de chegada, se necessário
        if (tempoAtual < chegada) {
            tempoAtual = chegada;
        }

        // Se a escada está na direção oposta, a pessoa precisa esperar
        if (direcaoAtual != -1 && direcaoAtual != direcao) {
            // A pessoa espera até a última pessoa na escada sair e a escada parar
            if (tempoAtual < ultimaSaida) {
                tempoAtual = ultimaSaida;
            }
        }

        // Atualiza o tempo atual para o tempo de chegada, se necessário
        if (tempoAtual < chegada) {
            tempoAtual = chegada;
        }

        // Calcula o tempo que a pessoa sai da escada
        int tempoSaida = tempoAtual + 10;

        // Atualiza o tempo final se este tempo de saída for maior
        if (tempoSaida > tempoFinal) {
            tempoFinal = tempoSaida;
        }

        // Atualiza o tempo atual, a direção da escada e o tempo da última saída
        direcaoAtual = direcao;
        ultimaSaida = tempoSaida;
    }

    printf("%d\n", tempoFinal);

    return 0;
}
