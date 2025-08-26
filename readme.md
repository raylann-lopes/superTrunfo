# Super Trunfo de Cidades - Nível 1: Cadastro de Cartas 🃏

Neste primeiro nível, seu objetivo é construir a base do nosso jogo Super Trunfo: um sistema para cadastrar as cartas com informações sobre as cidades. Você vai praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.

## 🎯 O que você vai fazer

Crie um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

| Atributo          | Descrição                               | Tipo de Dado |
|-------------------|-----------------------------------------|--------------|
| Estado            | Uma letra de 'A' a 'H'.                 | `char`         |
| Código da Carta   | A letra do estado seguida de um número de 01 a 04 (ex: A01). | `char[]` (string) |
| Nome da Cidade    | O nome da cidade.                       | `char[]` (string) |
| População         | O número de habitantes.                 | `int`          |
| Área (em km²)     | A área da cidade.                       | `float`        |
| PIB               | O Produto Interno Bruto da cidade.      | `float`        |
| Pontos Turísticos | A quantidade de pontos turísticos.      | `int`          |

### Exportar para as Planilhas

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas de forma organizada.

### Exemplo de Saída Esperada

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

## ✅ Requisitos

### Requisitos Funcionais

- [ ] O programa deve ler corretamente os dados de duas cartas do usuário.
- [ ] O programa deve armazenar os dados lidos em variáveis apropriadas.
- [ ] O programa deve exibir os dados de cada carta formatados de forma clara.

### Requisitos Não Funcionais

- **Usabilidade**: O programa deve ser fácil de usar, com instruções claras para o usuário.
- **Legibilidade**: O código deve ser bem indentado, com nomes de variáveis significativos.
- **Corretude**: O programa deve funcionar sem erros de compilação ou execução.

## ⚠️ Simplificações para o Desafio

**Importante**: Para este nível, siga estritamente as simplificações abaixo.

- Você só precisa implementar o cadastro e a exibição de duas cartas.
- Não utilize estruturas de repetição (como `for` ou `while`) ou estruturas de decisão (como `if` ou `else`). Seu código deve ser uma sequência simples de instruções.

## 🚀 Entregando seu Projeto

Desenvolva seu projeto no GitHub:

1. Crie um repositório público no GitHub.
2. Recomendamos usar o GitHub Codespaces para facilitar o desenvolvimento.

Crie o arquivo do seu código:

1. No seu repositório, crie um arquivo chamado `super_trunfo.c` com o seu código C.

Compile e teste:

1. Compile e teste seu programa para garantir que ele funciona corretamente.

Faça commit e push:

1. Faça commit das suas alterações e envie (`push`) para o seu repositório no GitHub.

Envie o link do repositório:

1. Copie o link do seu repositório no GitHub e envie-o através da plataforma SAVA.