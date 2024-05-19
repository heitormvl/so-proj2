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

### Exemplos de Entrada e Saída

#### Exemplo de Entrada 1:
```
5
1 0
2 1
3 0
4 1
5 0
```

**Saída Esperada:**
```
35
```

#### Exemplo de Entrada 2:
```
6
1 0
3 1
6 0
10 1
15 0
21 1
```

**Saída Esperada:**
```
51
```

#### Exemplo de Entrada 3:
```
4
5 0
10 1
20 0
30 1
```

**Saída Esperada:**
```
40
```

### Testes

O programa pode ser testado com diferentes conjuntos de entradas para garantir que os resultados sejam precisos. Alguns exemplos de testes foram fornecidos acima para validação.

## Contato

Para mais informações, entre em contato com o desenvolvedor.

```

### Explicação do README:

- **Descrição**: Explica brevemente o propósito do programa.
- **Compilação e Execução**:
  - **Requisitos**: Lista o requisito de um compilador C.
  - **Como Compilar**: Instruções para compilar o programa usando `gcc`.
  - **Como Executar**: Instruções para executar o programa compilado.
- **Comprovação dos Resultados**: Descreve como verificar se os resultados são corretos.
- **Exemplos de Entrada e Saída**: Fornece exemplos de entradas e saídas esperadas para ajudar na verificação dos resultados.
- **Testes**: Descreve que o programa pode ser testado com diferentes conjuntos de entradas.
- **Contato**: Informação de contato para mais informações.