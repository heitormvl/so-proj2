### README

# Escalator Simulation

## Descrição

Este programa simula o funcionamento de uma escada rolante dupla, que pode mudar de direção com base na chegada das pessoas e suas direções desejadas. O programa calcula o último momento em que a escada rolante estará em uso.

## Compilação e Execução

### Requisitos

- Compilador C (gcc recomendado)

### Como Compilar

1. Navegue até o diretório onde o arquivo `escalator.c` está localizado.
2. Execute o comando de compilação:

```sh
gcc -o escalator escalator.c
```

Isso criará um executável chamado `escalator` no diretório atual.

### Como Executar

1. Após a compilação, execute o programa com o seguinte comando:

```sh
./escalator
```

2. Insira os dados conforme solicitado. Por exemplo:

```
5
6 0
7 1
9 0
12 1
15 0
```

### Comprovação dos Resultados

O programa calculará o tempo final de operação da escada rolante e o exibirá na saída padrão. Você pode verificar os resultados comparando a saída do programa com os resultados esperados.

### Testes

O programa pode ser testado com diferentes conjuntos de entradas para garantir que os resultados sejam precisos. Alguns exemplos de testes foram fornecidos acima para validação.